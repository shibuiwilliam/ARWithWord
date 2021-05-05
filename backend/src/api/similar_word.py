from fastapi import APIRouter
from logging import getLogger
from typing import List
from src.constants import LANGUAGE_ENUM

from src.similar_word.similar_word import similar_word_predictor
from src.data.schema import Prediction, PredictionRequest


logger = getLogger(__name__)

router = APIRouter()


@router.post("/", response_model=List[Prediction])
def predict(
    prediction_request: PredictionRequest,
):
    predictions = similar_word_predictor.predict(
        word=prediction_request.word,
        topn=prediction_request.topn,
    )
    return predictions


@router.get("/sample", response_model=List[Prediction])
def predict_sample():
    predictions = similar_word_predictor.predict(
        word="ネコ",
        topn=20,
    )
    return predictions
