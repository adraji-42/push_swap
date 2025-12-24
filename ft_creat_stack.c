/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:06:10 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:09:14 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_head	*ft_new_head(int value)
{
	t_head	*new;

	new = ft_malloc(sizeof(t_head));
	new->rear = NULL;
	new->top = NULL;
	new->value = value;
	new->how_far = 1000;
	new->stack_index = -1;
	new->value_index = -1;
	return (new);
}

void	ft_addtop_head(t_stack *stack, t_head *new)
{
	if (!new)
		return ;
	if (!stack->head)
	{
		stack->head = new;
		return ;
	}
	new->rear = stack->head;
	stack->head->top = new;
	stack->head = new;
}

t_stack	*ft_creat_stack(t_tab *tab)
{
	t_stack	*stack;

	stack = ft_malloc(sizeof(t_stack));
	stack->size = 0;
	stack->head = NULL;
	if (!tab)
		return ;
	while (stack->size < tab->size)
		ft_addtop_head(stack, ft_new_head(tab->tab[stack->size++]));
	ft_stack_indexing(stack->head);
	ft_value_indexing(stack->head, tab);
	ft_calculate_far(stack);
	free(tab->tab);
	tab->tab = NULL;
	return (stack);
}
