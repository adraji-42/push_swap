NAME			= push_swap
CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g
RM				= rm -f

# --- DIRECTORIES ---
LIB_DIR			= libftprintf
OPS_DIR			= operations
PARS_DIR		= parsing
STK_DIR			= stack_utils
SORT_DIR		= sorting

LIBFTPRINTF		= $(LIB_DIR)/libftprintf.a

# --- HEADER FILES ---
# Including all headers to trigger re-compilation on changes
HEADERS			= ft_push_swap.h \
				  $(PARS_DIR)/ft_parsing.h \
				  $(SORT_DIR)/ft_sort_utils.h \

# --- SOURCE FILES ---
MAIN_FILES		= ft_mem_manager.c \
				  ft_push_swap.c \
				  ft_stack_init.c \
				  ft_error_utils.c

OPS_FILES		= $(OPS_DIR)/ft_rotate.c \
				  $(OPS_DIR)/ft_push.c \
				  $(OPS_DIR)/ft_reverse_rotate.c \
				  $(OPS_DIR)/ft_swap.c

PARS_FILES		= $(PARS_DIR)/ft_atoi_ilimit.c \
				  $(PARS_DIR)/ft_parsing.c \
				  $(PARS_DIR)/ft_strsjoin_check.c

STK_FILES		= $(STK_DIR)/ft_stack_analysis.c \
				  $(STK_DIR)/ft_stack_indexing.c

SORT_FILES		= $(SORT_DIR)/ft_sort_prep.c \
				  $(SORT_DIR)/ft_sorting.c \
				  $(SORT_DIR)/ft_best_pb.c

SRCS			= $(MAIN_FILES) $(OPS_FILES) $(PARS_FILES) $(STK_FILES) $(SORT_FILES)
OBJS			= $(SRCS:.c=.o)

# --- RULES ---

all:			$(NAME)

# Link the final executable
$(NAME):		$(OBJS) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTPRINTF) -o $(NAME)

# The 'force' rule ensures that the sub-Makefile is always checked
$(LIBFTPRINTF):	force
	$(MAKE) -C $(LIB_DIR)

# Compilation rule for object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIB_DIR) clean

fclean:			clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re:				fclean all

# Rule to force checking the library directory
force:

.PHONY:	clean force