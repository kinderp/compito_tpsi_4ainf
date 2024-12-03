CFLAGS=-g -DDEBUG -DBUF=10

all: main

clean: main main.o math.o pow.o logger.o
	rm -rf main main.o math.o pow.o logger.o

main: main.o math.o pow.o logger.o
	gcc $(CFLAGS) -o main main.o pow.o math.o logger.o

main.o: main.c math.h pow.h
	gcc $(CFLAGS) -c -o main.o main.c

math.o: math.c math.h
	gcc $(CFLAGS) -c -o math.o math.c

pow.o: pow.c pow.h
	gcc $(CFLAGS) -c -o pow.o pow.c

logger.o: logger.c logger.h
	gcc $(CFLAGS) -c -o logger.o logger.c
