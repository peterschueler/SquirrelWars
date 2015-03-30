CC=gcc
FILES = WorldEvents.c main.c
OUT = SquirrelWars
CFLAGS=-std=c99

build: $(FILES)
		$(CC) -o $(OUT) $(FILES) $(CFLAGS)

clean:
	rm -f *.o $(OUT)
