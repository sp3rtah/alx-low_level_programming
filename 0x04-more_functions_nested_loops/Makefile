SRC:= main.c _putchar.c 5-more_numbers.c
CC:= gcc
CFLAGS:= -Wall -Werror -Wextra -pedantic -std=gnu89

run: compile
	./a.out

betty: $(SRC)
	betty $^

compile: $(SRC)
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.out
