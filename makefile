.PHONY: test
test: build
	cmake --build build
	cd build && ctest

build:
	cmake -S . -B build

clean:
	rm -rf *build*
