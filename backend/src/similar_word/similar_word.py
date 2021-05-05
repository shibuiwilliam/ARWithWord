import os
import shutil
import gzip
from urllib.request import urlopen

import fasttext
import fasttext.util
from gensim.models.fasttext import load_facebook_model
from google.cloud import storage

from logging import getLogger
from typing import List, Tuple, Dict

from src.constants import LANGUAGE_ENUM
from src.data.schema import Prediction


logger = getLogger(__name__)


class SimilarWordPredictor(object):
    def __init__(
        self,
        bucket_name: str,
        model_directory: str = "/opt/",
        language: LANGUAGE_ENUM = LANGUAGE_ENUM.ENGLISH,
        model_dimension: int = 100,
        threshold: float = 0.6,
    ):
        self.bucket_name = bucket_name
        self.client = storage.Client()
        self.bucket = self.client.get_bucket(self.bucket_name)

        self.model_directory = model_directory
        self.language = language
        self.model_dimension = model_dimension
        if self.model_dimension not in [100, 300]:
            raise ValueError("model dimension must be one of 100 or 300")

        self.file_path = self.download_model(force_download=False)
        self.fasttext_predictor = load_facebook_model(self.file_path)
        logger.info(f"loaded {self.file_path}")

        self.threshold = threshold

        self.cache: Dict[str, List[Prediction]] = {}

    def predict(
        self,
        word: str,
        topn: int = 20,
    ) -> List[Prediction]:
        logger.info(f"predict {word}")

        key = f"{word}_{topn}"
        if key in self.cache.keys():
            return self.cache[key]

        _predictions = self.fasttext_predictor.wv.most_similar(
            word,
            topn=topn,
        )

        predictions = []
        for p in _predictions:
            if p[1] < self.threshold:
                continue
            if repr(p[0]).startswith("'\\u"):
                continue
            predictions.append(
                Prediction(
                    similar_word=p[0],
                    similarity=p[1],
                )
            )

        # predictions = [p for p in _predictions if p[1] >= self.threshold and not repr(p[0]).startswith("'\\u")]
        logger.info(f"{word} prediction: {predictions}")

        self.cache[key] = predictions

        return predictions

    def download_model(
        self,
        force_download: bool = False,
    ):
        file_name = f"cc.{self.language.value}.{self.model_dimension}.bin"
        file_path = os.path.join(self.model_directory, file_name)
        logger.info(f"retrieve model {file_name}")

        if os.path.exists(file_path):
            if not force_download:
                logger.info(f"model {file_name} exists")
                return file_path

        blob = self.bucket.blob(file_name)
        blob.download_to_filename(file_path)

        logger.info(f"retrieved model {file_name}")

        return file_path


similar_word_predictor = SimilarWordPredictor(
    bucket_name=os.environ["BUCKET_NAME"],
    model_directory=os.getenv("MODEL_DIRECTORY", "/opt/"),
    language=LANGUAGE_ENUM[os.getenv("LANGUAGE", "ENGLISH").upper()],
    model_dimension=int(os.getenv("MODEL_DIMENSION", 100)),
    threshold=float(os.getenv("THRESHOLD", 0.6)),
)
