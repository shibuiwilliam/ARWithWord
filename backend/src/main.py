from fastapi import FastAPI
from logging import getLogger

from src.api import (
    health,
    similar_word,
)

logger = getLogger(__name__)


app = FastAPI(
    title="similar_word_api",
    description="similar word api",
    version="0.0.1",
)

app.include_router(health.router, prefix="", tags=["health"])
app.include_router(similar_word.router, prefix="/similar-word", tags=["similar_word"])
