/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:15:24 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:23:20 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_stack *stack)
{
	t_head	*rear;
	t_head	*second;

	if (!stack->head)
		return ;
	rear = stack->head;
	second = stack->head->rear;
	while (rear->rear)
		rear = rear->rear;
	second
}
