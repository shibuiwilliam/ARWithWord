from typing import List, Tuple, Dict
from pydantic import BaseModel


class Prediction(BaseModel):
    similar_word: str
    similarity: float
