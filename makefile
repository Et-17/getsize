BinaryName = getsize.exe
BinaryLocation = .
CC = gcc

build:
	$(CC) src/*.c src/headers/*.h -I src/headers -o $(BinaryLocation)/$(BinaryName)