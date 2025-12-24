/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:44:03 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 15:12:16 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
