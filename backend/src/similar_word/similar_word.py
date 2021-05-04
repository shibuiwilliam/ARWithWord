import os
import fasttext
import fasttext.util
import gensim
from gensim.models.fasttext import load_facebook_model
from logging import getLogger
from typing import List, Tuple, Dict
from constants import LANGUAGE_ENUM


logger = getLogger(__name__)


class SimilarWordPredictor(object):
    def __init__(
        self,
        language: LANGUAGE_ENUM = LANGUAGE_ENUM.ENGLISH,
        threshold: float = 0.6,
    ):
        self.language = language
        self.model_file_name = fasttext.util.download_model(self.language.value, if_exists="ignore")
        self.fasttext_predictor = load_facebook_model(self.model_file_name)
        logger.info(f"loaded {self.model_file_name}")

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


similar_word_predictor = SimilarWordPredictor(
    language=LANGUAGE_ENUM[os.getenv("LANGUAGE", "ENGLISH").upper()],
    threshold=float(os.getenv("THRESHOLD", 0.6)),
)
