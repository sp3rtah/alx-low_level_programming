SRC:= main.c
CC:= gcc
CFLAGS:= -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 11-print_to_98.c

run: compile
	./a.out

betty: $(SRC)
	betty $^

compile: $(SRC)
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.out
