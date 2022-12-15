SRC:= main.c
CC:= gcc
CFLAGS:= -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 10-print_triangle.c

run: compile
	./a.out

betty: $(SRC)
	betty $^

compile: $(SRC)
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.out
