/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:44:03 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 16:31:30 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_array	array;

	if (argc < 2)
		return (0);
	array = ft_parsing(argc - 1, &argv[1]);
	a = ft_init_stack_from_array(&array);
	b = ft_init_stack_from_array(NULL);
	free(array.values);
	return (0);
}
