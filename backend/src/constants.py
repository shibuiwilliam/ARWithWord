import os
from enum import Enum


class LANGUAGE_ENUM(Enum):
    ENGLISH = "en"
    JAPANESE = "ja"


POSTFIX = LANGUAGE_ENUM[os.getenv("LANGUAGE", "ENGLISH").upper()].value
