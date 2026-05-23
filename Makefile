CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic
SRC = src/main.c
TARGET = bootmii-poc

build: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: build run clean
