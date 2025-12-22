NAME		=	push_swap

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

PRINTF_DIR	=	libftprintf
PRINTF		=	$(PRINTF_DIR)/libftprintf.a

SRCS		=	push_swap.c \
				ft_creat_stack.c \
				ft_malloc_free.c \
				ft_print_errors.c \
				indexing/ft_stack_indexing.c \
				parsing/ft_atoi_ilimit.c \
				parsing/ft_parsing.c \
				parsing/ft_strsjoin_check.c

OBJS		=	$(SRCS:.c=.o)


%.o: %.c #$(HEADER)
	$(CC) $(CFLAGS) -g -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(PRINTF)
			$(CC) $(CFLAGS) -g $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
			make -C $(PRINTF_DIR)

clean:
			make -C $(PRINTF_DIR) clean
			$(RM) $(OBJS)

fclean:		clean
			make -C $(PRINTF_DIR) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re