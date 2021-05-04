from fastapi import APIRouter, Depends, File, HTTPException, UploadFile
from logging import getLogger
from typing import List, Tuple, Dict
from pydantic import BaseModel
from constants import LANGUAGE_ENUM
from similar_word import similar_word_predictor


logger = getLogger(__name__)

router = APIRouter()


class Prediction(BaseModel):
    similar_word: str
    similarity: float


@router.get("/", response_model=List[Prediction])
async def predict(
    word: str,
    topn: int = 20,
):
    _predictions = similar_word_predictor.predict(
        word=word,
        topn=topn,
    )
    predictions: List[Prediction] = []
    for p in _predictions:
        predictions.append(
            Prediction(
                similar_word=p[0],
                similarity=p[1],
            )
        )
    return predictions
