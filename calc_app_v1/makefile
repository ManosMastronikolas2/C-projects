CC=gcc
CSWITCHES=-Wall -std=c99 -pedantic

app:    calcfunc.h
	$(CC) $(CSWITCHES) calcfunc.c -c
	$(CC) $(CSWITCHES) calc_app.c calcfunc.o
	./a.out
clean:
	rm -rf a.out calcfunc.o
