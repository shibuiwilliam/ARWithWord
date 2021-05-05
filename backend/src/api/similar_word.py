from fastapi import APIRouter, Depends, File, HTTPException, UploadFile
from logging import getLogger
from typing import List
from src.constants import LANGUAGE_ENUM

from src.similar_word.similar_word import similar_word_predictor
from src.data.schema import Prediction


logger = getLogger(__name__)

router = APIRouter()


@router.get("/", response_model=List[Prediction])
def predict(
    word: str,
    topn: int = 20,
):
    predictions = similar_word_predictor.predict(
        word=word,
        topn=topn,
    )
    return predictions


@router.get("/sample", response_model=List[Prediction])
def predict_sample():
    predictions = similar_word_predictor.predict(
        word="ネコ",
        topn=20,
    )
    return predictions
