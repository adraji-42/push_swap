/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:15:24 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 15:11:19 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_rotate(t_stack *stack)
{
	t_head	*rear;
	t_head	*second;

	if (!stack->head || stack->size < 2)
		return ;
	rear = stack->head;
	second = stack->head->rear;
	while (rear->rear)
		rear = rear->rear;
	rear->rear = stack->head;
	stack->head->top = rear;
	stack->head->rear = NULL;
	stack->head = second;
	stack->head->top = NULL;
}

void	ft_ra(t_stack *a)
{
	ft_rotate(a);
	ft_printf("ra\n");
}

void	ft_rb(t_stack *b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	ft_rr(t_stack *a, t_stack *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
