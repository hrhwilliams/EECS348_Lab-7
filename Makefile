CC := gcc
CFLAGS := -O1

main: main.o football.o
	$(CC) $^ -o $@