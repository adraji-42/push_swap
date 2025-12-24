/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:44:03 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 15:09:07 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_stack(t_head *head)
{
	while (head)
	{
		ft_printf("********************\n");
		ft_printf("|value :%11d|\n", head->value);
		ft_printf("|how to far :%6d|\n", head->how_far);
		ft_printf("|value index :%5d|\n", head->value_index);
		ft_printf("|stack index :%5d|\n", head->stack_index);
		head = head->rear;
	}
	ft_printf("********************\n");
}

int	main(int c, char **v)
{
	t_stack	*a;
	t_stack	*b;
	t_tab	tab;

	if (c < 2)
		return (0);
	tab = ft_parsing(c - 1, &v[1]);
	a = ft_creat_stack(&tab);
	b = ft_creat_stack(NULL);
	return (0);
}
