NAME = ex05

bin/$(NAME): bin/ $(NAME).c
	gcc -o bin/$(NAME) $(NAME).c

bin/:
	mkdir bin

run: bin/$(NAME)
	./bin/$(NAME)

.PHONY: clean
clean:
	rm -rf bin
