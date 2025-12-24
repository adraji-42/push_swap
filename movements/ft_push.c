/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 08:09:03 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:26:34 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_push(t_stack *src, t_stack *dest)
{
	t_head	*node_push;

	if (!src || !src->head)
		return ;
	node_push = src->head;
	src->head = src->head->rear;
	if (src->head)
		src->head->top = NULL;
	node_push->rear = dest->head;
	if (dest->head)
		dest->head->top = node_push;
	dest->head = node_push;
	dest->head->top = NULL;
	src->size--;
	dest->size++;
}

void	ft_pa(t_stack *b, t_stack *a)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

void	ft_pb(t_stack *a, t_stack *b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}
