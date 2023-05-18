# Simple makefile to make some common tasks a little easier
# Simplifies github action and pre-commit definitions
.PHONY: test
test: build
	cmake --build build
	cd build && ctest

build:
	cmake -S . -B build -G Ninja

clean:
	rm -rf build
	rm -rf *-build-*
