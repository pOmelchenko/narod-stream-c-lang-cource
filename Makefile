CC = gcc

main: main.o utils.o
	$(CC) -o main main.o  utils.o

main.o: main.c main.h  utils.h
	$(CC) -O0 -g3 -Wall -c main.c
	$(CC) -masm=intel -g3 -Wall -c main.c -S


utils.o: utils.c utils.h
	$(CC) -O0 -g3 -Wall -c utils.c
	$(CC) -masm=intel -g3 -Wall -c utils.c -S

clean:
	rm -rf *.i *.o *.s main
