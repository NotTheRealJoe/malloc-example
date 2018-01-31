malloc-example: malloc-example.o hexdump.o
	gcc malloc-example.o hexdump.o -o malloc-example

malloc-example.o: malloc-example.c
	gcc -c malloc-example.c

hexdump.o: hexdump.c
	gcc -c hexdump.c
clean:
	rm -f *.o malloc-example
