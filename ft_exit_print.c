/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 13:24:23 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 15:31:15 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_bool	ft_allocation(void)
{
	ft_putstr_fd("Error:\n\tFaild allocation.", 2);
	return (FAILED);
}

t_bool	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (FAILED);
}

t_bool	ft_sorted(void)
{
	ft_putstr_fd("It is arranged\n", 1);
	return (SUCCESS);
}
