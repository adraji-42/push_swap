/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:06:10 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 17:55:32 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_stack	*ft_creat_stack_a(t_tab *tab)
{
	t_stack	*a;
	int		index;

	index = 0;
	a->head = NULL;
	while (index < tab->size)
		ft_addtop_head(a, ft_new_head(tab->tab[index++]));
	ft_stack_indexing(a->head);
	ft_value_indexing(a, tab);
	ft_calculate_far(a);
	free(tab->tab);
	tab->tab = NULL;
	return (a);
}
