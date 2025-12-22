/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:06:10 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 12:25:44 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_stack(int value)
{
	t_stack	*new;

	new = ft_malloc(sizeof(t_stack));
	new->rear = NULL;
	new->top = NULL;
	new->frame.value = value;
	new->frame.how_far = 1000;
	new->frame.stack_index = -1;
	new->frame.value_index = -1;
	return (new);
}

void	ft_addtop_stack(t_stack **stack, t_stack *new)
{
	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	new->rear = *stack;
	(*stack)->top = new;
	*stack = new;
}

t_stack	*ft_creat_stack_a(t_tab *tab)
{
	t_stack	*a;
	int	index;

	a = NULL;
	index = 0;
	while (index < tab->size)
		ft_addtop_stack(&a, ft_new_stack(tab->tab[index++]));
	ft_stack_indexing(a);
	ft_value_indexing(a, tab);
	free(tab->tab);
	tab->tab = NULL;
	return (a);
}
