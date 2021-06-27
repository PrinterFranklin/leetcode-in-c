CC = gcc
CFLAGS = -c -Werror -g
LDFLAGS = -o

test: test_contiguous_array.o contiguous_array.o
	$(CC) $(LDFLAGS) test test_contiguous_array.o contiguous_array.o

test_contiguous_array.o: test_contiguous_array.c contiguous_array.h
	$(CC) $(CFLAGS) test_contiguous_array.c

contiguous_array.o: contiguous_array.c
	$(CC) $(CFLAGS) contiguous_array.c

clean:
	rm -f test *.o
