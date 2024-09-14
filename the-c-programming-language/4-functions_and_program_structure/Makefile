NAME = ex06

bin/$(NAME): bin/ $(NAME).c
	gcc -o bin/$(NAME) $(NAME).c -lm

bin/:
	mkdir bin

run: bin/$(NAME)
	./bin/$(NAME)

.PHONY: clean
clean:
	rm -rf bin
