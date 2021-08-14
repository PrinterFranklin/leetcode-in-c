CC = gcc
CFLAGS = -c -Werror -g
LDFLAGS = -o

test: test_reverse_linked_list.o reverse_linked_list.o linked_list.o
	$(CC) $(LDFLAGS) test test_reverse_linked_list.o reverse_linked_list.o linked_list.o

test_reverse_linked_list.o: test_reverse_linked_list.c linked_list.h reverse_linked_list.h
	$(CC) $(CFLAGS) test_reverse_linked_list.c

reverse_linked_list.o: reverse_linked_list.c linked_list.h
	$(CC) $(CFLAGS) reverse_linked_list.c

linked_list.o: linked_list.c linked_list.h
	$(CC) $(CFLAGS) linked_list.c

clean:
	rm -f test *.o
