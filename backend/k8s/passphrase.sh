#!/bin/bash

kubectl \
    -n similar-word \
    create secret generic dev-secret \
    --from-literal=passphrase=<your passphrase>

    