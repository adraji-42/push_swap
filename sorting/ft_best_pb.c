/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 06:47:01 by adraji            #+#    #+#             */
/*   Updated: 2025/12/26 13:43:06 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_utils.h"

static t_node	*ft_find_max_rank(t_stack *stack)
{
	t_node	*max_node;
	t_node	*current;

	if (!stack || !stack->top)
		return (NULL);
	max_node = stack->top;
	current = stack->top->next;
	while (current)
	{
		if (current->rank > max_node->rank)
			max_node = current;
		current = current->next;
	}
	return (max_node);
}

static t_node	*ft_get_target_in_b(t_node *node_a, t_stack *b)
{
	t_node	*target;
	int		best_rank;
	t_node	*current_b;

	target = NULL;
	best_rank = -1;
	current_b = b->top;
	while (current_b)
	{
		if (current_b->rank < node_a->rank && current_b->rank > best_rank)
		{
			best_rank = current_b->rank;
			target = current_b;
		}
		current_b = current_b->next;
	}
	if (!target)
		return (ft_find_max_rank(b));
	return (target);
}

static void	ft_calculate_shared(t_op *op, int *dist_a, int *dist_b)
{
	if (*dist_a < 0 && *dist_b < 0)
	{
		if (*dist_a < *dist_b)
			op->rrr = -*dist_b;
		else
			op->rrr = -*dist_a;
		*dist_a += op->rrr;
		*dist_b += op->rrr;
		op->rra = -*dist_a;
		op->rrb = -*dist_b;
	}
	else if (*dist_a > 0 && *dist_b > 0)
	{
		if (*dist_a > *dist_b)
			op->rr = *dist_b;
		else
			op->rr = *dist_a;
		*dist_a -= op->rr;
		*dist_b -= op->rr;
		op->ra = *dist_a;
		op->rb = *dist_b;
	}
}

static t_op	ft_get_operations(t_node *node_a, t_stack *b)
{
	t_op	op;
	t_node	*target;
	int		dist_a;
	int		dist_b;

	ft_memset(&op, 0, sizeof(t_op));
	target = ft_get_target_in_b(node_a, b);
	dist_a = node_a->target_dist;
	dist_b = target->target_dist;
	if ((dist_a < 0 && dist_b < 0) || (dist_a > 0 && dist_b > 0))
		ft_calculate_shared(&op, &dist_a, &dist_b);
	else
	{
		if (dist_a < 0)
			op.rra = -dist_a;
		else
			op.ra = dist_a;
		if (dist_b < 0)
			op.rrb = -dist_b;
		else
			op.rb = dist_b;
	}
	op.cost = op.ra + op.rb + op.rr + op.rra + op.rrb + op.rrr;
	return (op);
}

t_op	ft_best_pb(t_stack *a, t_stack *b)
{
	t_op	op;
	t_op	best;
	t_node	*current;

	best.cost = INT_MAX;
	current = a->top;
	while (current)
	{
		op = ft_get_operations(current, b);
		if (op.cost < best.cost)
			ft_memcpy(&best, &op, sizeof(t_op));
		current = current->next;
	}
	return (best);
}
