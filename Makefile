
all:
	clang++ -Werror -Wextra -Wall -std=c++11 *.cpp -o brainfuck
clean:
	rm -rf *.o
fclean: clean
	rm -rf brainfuck
re: fclean all
