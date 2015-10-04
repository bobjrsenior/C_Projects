C = gcc

CFLAGS = -Wall

DEPS = Binary_Search_Tree.h

OBJ = main.o Binary_Search_Tree.o



%.o: %.c $(DEPS)

	$(CC) $(CFLAGS) -c -o $@ $<



Binary_Search_Tree: $(OBJ)

	gcc $(CFLAGS) -o $@ $^
