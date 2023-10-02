#!/bin/sh

set -ex

CFLAGS="-Wall -Wextra `pkg-config --cflags raylib`"

clang $CFLAGS -o mathe main.c
