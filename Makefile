
all:
	clang++ -Werror -Wextra -Wall -std=c++11 *.cpp -o brainfuck
clean:
	rm *.o
fclean: clean
	rm brainfuck
re: fclean
	all
