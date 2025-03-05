CC := gcc
CFLAGS := -Wall -O1

fact: main.o factorial.o
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean
clean:
	rm -f *.o
	rm -f fact