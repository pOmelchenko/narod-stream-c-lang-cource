CC = gcc

main: main.o ariph.o utils.o
	$(CC) -o main main.o ariph.o utils.o

main.o: main.c main.h ariph.h utils.h
	$(CC) -O0 -g3 -Wall -c main.c
	$(CC) -masm=intel -g3 -Wall -c main.c -S

ariph.o: ariph.c ariph.h
	$(CC) -O0 -g3 -Wall -c ariph.c
	$(CC) -masm=intel -g3 -Wall -c ariph.c -S

utils.o: utils.c utils.h
	$(CC) -O0 -g3 -Wall -c utils.c
	$(CC) -masm=intel -g3 -Wall -c utils.c -S

clean:
	rm -rf *.i *.o *.s main
