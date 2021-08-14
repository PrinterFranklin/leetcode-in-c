CC = gcc
CFLAGS = -c -O2 -Werror -g
LDFLAGS = -o

test: test_remove_nth_from_end.o remove_nth_from_end.o linked_list.o
	$(CC) $(LDFLAGS) test test_remove_nth_from_end.o remove_nth_from_end.o linked_list.o

test_remove_nth_from_end.o: test_remove_nth_from_end.c linked_list.h remove_nth_from_end.h
	$(CC) $(CFLAGS) test_remove_nth_from_end.c

remove_nth_from_end.o: remove_nth_from_end.c linked_list.h
	$(CC) $(CFLAGS) remove_nth_from_end.c

linked_list.o: linked_list.c linked_list.h
	$(CC) $(CFLAGS) linked_list.c

clean:
	rm -f test *.o
