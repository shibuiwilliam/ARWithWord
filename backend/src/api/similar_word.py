import os
from typing import List

from fastapi import APIRouter, HTTPException, Security
from fastapi.security.api_key import APIKeyHeader
from starlette import status

from logging import getLogger

from src.constants import LANGUAGE_ENUM
from src.similar_word.similar_word import similar_word_predictor
from src.data.schema import Prediction, PredictionRequest


logger = getLogger(__name__)

router = APIRouter()

api_key_header_auth = APIKeyHeader(
    name="X-API-KEY",
    auto_error=True,
)


def get_api_key(api_key_header: str = Security(api_key_header_auth)):
    if api_key_header != os.environ["PASSPHRASE"]:
        raise HTTPException(
            status_code=status.HTTP_401_UNAUTHORIZED,
            detail="Invalid API Key",
        )


@router.post(
    "/",
    response_model=List[Prediction],
    dependencies=[Security(get_api_key)],
)
def predict(
    prediction_request: PredictionRequest,
):
    predictions = similar_word_predictor.predict(
        word=prediction_request.word,
        topn=prediction_request.topn,
    )
    return predictions


@router.get(
    "/sample",
    response_model=List[Prediction],
    dependencies=[Security(get_api_key)],
)
def predict_sample():
    predictions = similar_word_predictor.predict(
        word="ネコ",
        topn=20,
    )
    return predictions
