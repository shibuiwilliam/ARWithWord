from typing import List, Tuple, Dict
from pydantic import BaseModel


class PredictionRequest(BaseModel):
    word: str
    topn: int = 20


class Prediction(BaseModel):
    similar_word: str
    similarity: float
