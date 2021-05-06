from fastapi import APIRouter
from src.constants import POSTFIX

router = APIRouter()


@router.get(f"/")
def health():
    return {"health": f"ok_{POSTFIX}"}
