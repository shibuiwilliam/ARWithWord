from fastapi import FastAPI
from logging import getLogger

from src.api import health_check

logger = getLogger(__name__)


app = FastAPI(
    title="similar_word_api",
    description="similar word api",
    version="0.0.1",
)

app.include_router(health_check.router, prefix="/health-check", tags=["health_check"])
