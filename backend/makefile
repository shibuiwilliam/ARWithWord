  ABSOLUTE_PATH := $(shell pwd)
DOCKERFILE := Dockerfile
DOCKER_IMAGE_NAME := shibui/similar_word_api
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

.PHONY: build
build:
	docker build \
		-t $(DOCKER_IMAGE_NAME):$(IMAGE_VERSION) \
		-f $(DOCKERFILE) \
		.

.PHONY: push
push:
	docker push $(DOCKER_IMAGE_NAME):$(IMAGE_VERSION)
