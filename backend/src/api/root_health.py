from fastapi import APIRouter

router = APIRouter()


@router.get("/")
def root_health():
    return {"health": "ok"}
