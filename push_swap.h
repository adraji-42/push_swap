/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 10:49:04 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 18:03:33 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libftprintf/ft_printf.h"

# define FAILED 1
# define SUCCESS 0

typedef struct s_table_of_int
{
	int	*tab;
	int	size;
}	t_tab;

typedef struct s_head
{
	struct s_head	*top;
	struct s_head	*rear;
	int				value;
	int				how_far;
	int				value_index;
	int				stack_index;
}	t_head;

typedef struct s_stack
{
	t_head	*head;
	int		size;
}	t_stack;

int		ft_print_error(void);
void	*ft_malloc(size_t size);
t_head	*ft_new_head(int value);
int		ft_free(int (*print)(void));
int		ft_allocation_error(void);
t_stack	*ft_creat_stack_a(t_tab *tab);
void	ft_stack_indexing(t_head *head);
void	ft_calculate_far(t_stack *stack);
t_tab	ft_parsing(int size, char **strs);
void	ft_addtop_head(t_stack *stack, t_head *new);
void	ft_value_indexing(t_head *head, t_tab *tab);

#endif