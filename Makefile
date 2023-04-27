##
## EPITECH PROJECT, 2021
## undefined
## File description:
## Makefile
##

RM	=	rm -rf

NAME	=	libmy_malloc.so

SRCS	=	src/malloc.c \
			src/fct.c	\
			src/error.c \
			src/calloc.c \
			src/realloc.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-std=gnu11 -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
		gcc -c -fpic $(SRCS)
		gcc -shared -o $(NAME) *.o

clean:
	$(RM) $(OBJS) *.o

fclean:	clean
	$(RM) $(NAME) *.o

re:	fclean all

.PHONY:	all clean fclean re

