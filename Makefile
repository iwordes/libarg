NAME = libarg.a

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f libarg.o

.PHONY: fclean
fclean: clean
	rm -f libarg.a

.PHONY: re
re: fclean all

$(NAME): libarg.c libarg.h
	gcc -Wall -Wextra -Werror -c  -I /nfs/2016/i/iwordes/proj/libft/include                                       libarg.c
	libtool -static -o $@ libarg.o
