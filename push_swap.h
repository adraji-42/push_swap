/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 10:49:04 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 12:48:42 by adraji           ###   ########.fr       */
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

typedef struct s_stack_frame_info
{
	int	value;
	int	how_far;
	int	value_index;
	int	stack_index;
}	t_frame;

typedef struct s_stack
{
	struct s_stack	*top;
	struct s_stack	*rear;
	t_frame			frame;
	int				stack_stack;	
}	t_stack;

int		ft_print_error(void);
void	*ft_malloc(size_t size);
t_stack	*ft_new_stack(int value);
int		ft_free(int (*print)(void));
int		ft_allocation_error(void);
t_stack	*ft_creat_stack_a(t_tab *tab);
void	ft_stack_indexing(t_stack *top);
t_tab	ft_parsing(int size, char **strs);
void	ft_value_indexing(t_stack *stack, t_tab *tab);
void	ft_addtop_stack(t_stack **stack, t_stack *new);

#endif