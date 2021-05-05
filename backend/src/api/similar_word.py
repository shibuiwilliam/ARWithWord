from fastapi import APIRouter, Depends, File, HTTPException, UploadFile
from logging import getLogger
from typing import List
from src.constants import LANGUAGE_ENUM

# from src.similar_word.similar_word import similar_word_predictor
from src.data.schema import Prediction


# logger = getLogger(__name__)

# router = APIRouter()


# @router.get("/", response_model=List[Prediction])
# async def predict(
#     word: str,
#     topn: int = 20,
# ):
#     _predictions = similar_word_predictor.predict(
#         word=word,
#         topn=topn,
#     )
#     predictions: List[Prediction] = []
#     for p in _predictions:
#         predictions.append(
#             Prediction(
#                 similar_word=p[0],
#                 similarity=p[1],
#             )
#         )
#     return predictions


# @router.get("/sample", response_model=List[Prediction])
# async def predict_sample():
#     _predictions = similar_word_predictor.predict(
#         word="ネコ",
#         topn=20,
#     )
#     predictions: List[Prediction] = []
#     for p in _predictions:
#         predictions.append(
#             Prediction(
#                 similar_word=p[0],
#                 similarity=p[1],
#             )
#         )
#     return predictions
