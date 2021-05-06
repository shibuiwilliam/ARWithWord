from fastapi import APIRouter

router = APIRouter()


@router.get(f"/")
def health():
    return {"health": f"ok"}
