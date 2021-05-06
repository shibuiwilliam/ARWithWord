from fastapi import APIRouter
from src.constants import POSTFIX

router = APIRouter()


@router.get(f"/{POSTFIX}")
def health():
    return {"health": f"ok_{POSTFIX}"}


@router.get("/")
def root_health():
    return {"health": f"ok_{POSTFIX}"}
