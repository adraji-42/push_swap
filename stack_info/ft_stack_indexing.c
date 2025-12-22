/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_indexing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:25:30 by adraji            #+#    #+#             */
/*   Updated: 2025/12/22 17:42:16 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_indexing(t_head *head)
{
	int	i;

	i = 0;
	while (head)
	{
		head->stack_index = i++;
		head = head->rear;
	}
}

static void	ft_quick_sort(int *tab, int start, int end)
{
	int	i;
	int	j;
	int	axis;
	int	tmp;

	if (start >= end)
		return ;
	axis = tab[start + (end - start) / 2];
	i = start - 1;
	j = end + 1;
	while (1)
	{
		while (tab[++i] < axis)
			;
		while (tab[--j] > axis)
			;
		if (i >= j)
			break ;
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
	}
	ft_quick_sort(tab, start, j);
	ft_quick_sort(tab, j + 1, end);
}

static int	ft_binary_search(int *tab, int size, int target)
{
	int	low;
	int	mid;
	int	high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (tab[mid] == target)
			return (mid);
		if (tab[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	exit(ft_free(ft_print_error));
}

void	ft_value_indexing(t_head *head, t_tab *tab)
{
	ft_quick_sort(tab->tab, 0, tab->size - 1);
	while (head)
	{
		head->stack_index = ft_binary_search(tab->tab, tab->size, head->value);
		head = head->rear;
	}
}
