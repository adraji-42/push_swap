/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_far.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:27:48 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 17:53:12 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_calculate_far(t_stack *stack)
{
	t_head	*tmp;
	int		mid;

	if (!stack->head)
		return ;
	mid = stack->size / 2;
	tmp = stack->head;
	while (tmp)
	{
		if (tmp->stack_index <= mid)
			tmp->how_far = tmp->stack_index;
		else
			tmp->how_far = tmp->stack_index - stack->size;
		tmp = tmp->rear;
	}
}
