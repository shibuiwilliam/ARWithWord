import os
import shutil
import gzip
from urllib.request import urlopen

import fasttext
import fasttext.util
from gensim.models.fasttext import load_facebook_model

from logging import getLogger
from typing import List, Tuple, Dict

from src.constants import LANGUAGE_ENUM
from src.data.schema import Prediction


logger = getLogger(__name__)


class SimilarWordPredictor(object):
    def __init__(
        self,
        model_directory: str = "/opt/model/",
        language: LANGUAGE_ENUM = LANGUAGE_ENUM.ENGLISH,
        threshold: float = 0.6,
    ):
        self.model_directory = model_directory
        self.language = language

        self.file_path = self.download_model(if_exists="ignore")
        self.fasttext_predictor = load_facebook_model(self.file_path)
        logger.info(f"loaded {self.file_path}")

        self.threshold = threshold

        self.cache: Dict[str, List[Tuple[float, str]]] = {}

    def predict(
        self,
        word: str,
        topn: int = 20,
    ) -> List[Tuple[str, float]]:
        logger.info(f"predict {word}")
        _predictions = self.fasttext_predictor.wv.most_similar(
            word,
            topn=topn,
        )
        predictions = [p for p in _predictions if p[1] >= self.threshold and not repr(p[0]).startswith("'\\u")]
        logger.info(f"{word} prediction: {predictions}")

        return predictions

    def _download_file(
        self,
        url: str,
        write_file_name: str,
        chunk_size: int = 2 ** 13,
    ):
        response = urlopen(url)
        downloaded = 0
        download_file_name = f"{write_file_name}.part"
        with open(download_file_name, "wb") as f:
            while True:
                chunk = response.read(chunk_size)
                downloaded += len(chunk)
                if not chunk:
                    break
                f.write(chunk)
        os.rename(download_file_name, write_file_name)

    def download_model(
        self,
        if_exists: str = "strict",
    ):
        file_name = f"cc.{self.language.value}.300.bin"
        gz_file_name = f"{file_name}.gz"
        file_path = os.path.join(self.model_directory, file_name)
        gz_file_path = os.path.join(self.model_directory, gz_file_name)

        if os.path.exists(file_path):
            if if_exists == "ignore":
                return file_path

        url = f"https://dl.fbaipublicfiles.com/fasttext/vectors-crawl/{gz_file_name}"

        self._download_file(
            url=url,
            write_file_name=gz_file_path,
        )
        with gzip.open(gz_file_path, "rb") as f:
            with open(file_path, "wb") as f_out:
                shutil.copyfileobj(f, f_out)

        return file_path


similar_word_predictor = SimilarWordPredictor(
    model_directory=os.getenv("MODEL_DIRECTORY", "/opt/model/"),
    language=LANGUAGE_ENUM[os.getenv("LANGUAGE", "ENGLISH").upper()],
    threshold=float(os.getenv("THRESHOLD", 0.6)),
)
