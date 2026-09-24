CC = gcc
FLAGS = -Wall -Werror --std=c99 
SRC = src/aagen.c
TARGET = bin/aagen

$(TARGET): $(SRC)
	mkdir -p bin
	$(CC) $(FLAGS) $^ -o $@

.PHONY: clean

clean:
	rm -fr bin/
	rm -fr pkg/
	.ypkg2/CLEANPKG

# For yports

installpkg2: buildpkg2
	ypkg2 install pkg/*

buildpkg2: $(TARGET)
	mkdir -p pkg
	.ypkg2/MAKEPKG
