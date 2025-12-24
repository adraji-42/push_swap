/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 10:49:04 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 15:33:17 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// --- REQUIRED LIBRARIES ---

# include <unistd.h>
# include <stdlib.h>
# include "libftprintf/ft_printf.h"

// --- STATUS MACROS ---

# define FAILED 1
# define SUCCESS 0

// --- STRUCTURES FOR STACK MANAGEMENT ---

//  Structure to handle an array of integers and its size.
typedef struct s_table_of_int
{
	int	*tab;
	int	size;
}	t_tab;

//  Node structure for the doubly linked list (Stack elements).
typedef struct s_head
{
	struct s_head	*top;
	struct s_head	*rear;
	int				value;
	int				how_far;
	int				value_index;
	int				stack_index;
}	t_head;

//  Main stack structure containing the pointer to the head and total size.
typedef struct s_stack
{
	t_head	*head;
	int		size;
}	t_stack;
t_bool	ft_sorted(void);
t_bool	ft_error(void);
t_bool	ft_allocation(void);
void	*ft_malloc(size_t size);
t_head	*ft_new_head(int value);
t_bool	ft_free(t_bool (*print)(void));
t_stack	*ft_creat_stack(t_tab *tab);
void	ft_stack_indexing(t_head *head);
void	ft_calculate_far(t_stack *stack);
t_tab	ft_parsing(int size, char **strs);
void	ft_addtop_head(t_stack *stack, t_head *new);
void	ft_value_indexing(t_head *head, t_tab *tab);

void	ft_pb(t_stack *a, t_stack *b);
void	ft_pa(t_stack *a, t_stack *b);
void	ft_sa(t_stack *a);
void	ft_sb(t_stack *b);
void	ft_ss(t_stack *a, t_stack *b);

#endif