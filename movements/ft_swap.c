/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:11:46 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 14:40:26 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_swap(t_stack *stack)
{
	t_head	*first;
	t_head	*second;

	if (!stack || stack->size < 2)
		return ;
	first = stack->head;
	second = first->rear;
	first->rear = second->rear;
	if (second->rear)
		second->rear->top = first;
	second->rear = first;
	second->top = NULL;
	first->top = second;
	stack->head = second;
}

void	ft_sa(t_stack *a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	ft_sb(t_stack *b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
