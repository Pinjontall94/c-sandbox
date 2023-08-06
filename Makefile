CFLAGS := -Wall -Wextra -std=c2x -pedantic

all:
	$(CC) $(CFLAGS) main.c

clean:
	rm a.out

run:
	./a.out
