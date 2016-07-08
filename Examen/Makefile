CC = gcc
CFLAGS=-I./src
OBJ= fibonacci.o

%.o: src/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

fibonacci: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
