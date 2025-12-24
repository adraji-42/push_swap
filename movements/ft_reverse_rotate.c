/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:59:56 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 12:33:40 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_reverse_rotate(t_stack *stack)
{
	t_head	*rear;
	t_head	*penultimate;

	if (!stack || !stack->head || !stack->head->rear)
		return ;
	rear = stack->head;
	while (rear->rear)
		rear = rear->rear;
	penultimate = rear->top;
	rear->rear = stack->head;
	stack->head->top = rear;
	penultimate->rear = NULL;
	stack->head = rear;
	rear->top = NULL;
}

void	ft_rra(t_stack *a)
{
	ft_reverse_rotate(a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack *b)
{
	ft_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_printf("rrr\n");
}
