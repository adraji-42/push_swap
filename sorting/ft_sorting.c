/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:23:12 by adraji            #+#    #+#             */
/*   Updated: 2025/12/26 14:04:20 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_utils.h"

void	ft_sorting(t_stack *a, t_stack *b)
{
	t_op	best;

	ft_pb(a, b);
	ft_pb(a, b);
	while (a->size)
	{
		best = ft_best_pb(a, b);
		while (best.rrr--)
			ft_rrr(a, b);
		while (best.rra--)
			ft_rra(a);
		while (best.rrb--)
			ft_rrb(b);
		while (best.rr--)
			ft_rr(a, b);
		while (best.ra--)
			ft_ra(a);
		while (best.rb--)
			ft_rb(b);
		ft_pb(a, b);
	}
	while (b->size)
		ft_pa(a, b);
	while (a->top->rank)
		ft_rra(a);
}
