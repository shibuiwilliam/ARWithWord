  ABSOLUTE_PATH := $(shell pwd)
DOCKERFILE := Dockerfile
IMAGE_VERSION := 0.0.1

.PHONY: lint
lint:
	black --check --diff --line-length 120 .

.PHONY: sort
sort:
	isort .

.PHONY: fmt
fmt: sort
	black --line-length 120 .

.PHONY: vet
vet:
	mypy api/

.PHONY: req
req:
	poetry export \
		--without-hashes \
		-f requirements.txt \
		--output requirements.txt


