NAME			= push_swap
CC				= cc
CFLAGS			= -g -Wall -Wextra -Werror
RM				= rm -f

LIB_DIR			= libftprintf
MOV_DIR			= movements
PARS_DIR		= parsing
STK_DIR			= stack_info

LIBFTPRINTF		= $(LIB_DIR)/libftprintf.a

MAIN_FILES		= ft_safe_malloc_free.c \
				  ft_push_swap.c \
				  ft_creat_stack.c \
				  ft_exit_print.c

MOV_FILES		= $(MOV_DIR)/ft_rotate.c \
				  $(MOV_DIR)/ft_push.c \
				  $(MOV_DIR)/ft_reverse_rotate.c \
				  $(MOV_DIR)/ft_swap.c

PARS_FILES		= $(PARS_DIR)/ft_atoi_ilimit.c \
				  $(PARS_DIR)/ft_parsing.c \
				  $(PARS_DIR)/ft_strsjoin_check.c

STK_FILES		= $(STK_DIR)/ft_how_far.c \
				  $(STK_DIR)/ft_stack_indexing.c

SRCS			= $(MAIN_FILES) $(MOV_FILES) $(PARS_FILES) $(STK_FILES)
OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTPRINTF) -o $(NAME)

$(LIBFTPRINTF):
	$(MAKE) -C $(LIB_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIB_DIR) clean

fclean:			clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re:				fclean all

.PHONY:			all clean fclean re