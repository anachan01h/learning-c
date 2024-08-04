NAME = ex02

bin/$(NAME): bin/ $(NAME).c
	gcc $(NAME).c -o bin/$(NAME)

bin/:
	mkdir bin

run: bin/$(NAME)
	./bin/$(NAME)

.PHONY: clean
clean:
	rm -rf bin
