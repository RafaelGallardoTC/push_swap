NAME	= push_swap
CC		= gcc
LIBFT	= ./libft
SRCS	= files/test_main.c files/tools.c files/stack.c files/stack_ops.c \

OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
HEADS	= libft.h

$(NAME): $(OBJS)
	@make -C ${LIBFT}
	@${CC} ${OBJS} ${CFLAGS} ./libft/libft.a -o ${NAME}
	@echo "Done!"

all:		$(NAME)

unflag:
			@${CC} files/main.c libft/*.c

debug:
			@${CC} ${CFLAGS} ${SRCS} ./libft/libft.a -g

clean:
			@$(RM) $(OBJS)
			@make clean -C ${LIBFT}

fclean:		clean
			@$(RM) $(NAME)
			@make fclean -C ${LIBFT}
			@echo "All Cleaned!"

re:			fclean all

.PHONY:		clean fclean all re
