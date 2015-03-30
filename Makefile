CC=gcc
FILES = WorldEvents.c main.c
OUT = SquirrelWars

build: $(FILES)
		$(CC) -o $(OUT) $(FILES)

clean:
	rm -f *.o $(OUT)
