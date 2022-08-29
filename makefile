BinaryName = getsize.exe
BinaryLocation = .
CC = gcc

build:
	$(CC) src\\*.c src\headers\\*.h -o $(BinaryLocation)\$(BinaryName)