/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:44:03 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:27:02 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int c, char **v)
{
	t_stack	*a;
	t_stack	*b;
	t_tab	tab;

	tab = ft_parsing(c - 1, &v[1]);
	a = ft_creat_stack(&tab);
	b = ft_creat_stack(NULL);
	return (0);
}

/*
int	main(int c, char **v)
{
	t_stack	*a;
	t_head	*tmp;
	t_tab	tab;

	if (c < 2)
		return (0);
	tab = ft_parsing(c - 1, &v[1]);
	a = ft_creat_stack_a(&tab);
	tmp = a->head;
	while (tmp)
	{
		ft_printf("********************\n");
		ft_printf("|value :%11d|\n", tmp->value);
		ft_printf("|how to far :%6d|\n", tmp->how_far);
		ft_printf("|value index :%5d|\n", tmp->value_index);
		ft_printf("|stack index :%5d|\n", tmp->stack_index);
		tmp = tmp->rear;
	}
	ft_printf("********************\n");
	return (0);
}
*/