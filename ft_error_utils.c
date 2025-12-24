/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 13:24:23 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 16:38:28 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_bool	ft_handle_alloc_error(void)
{
	ft_putstr_fd("Error:\n\tFailed allocation.", 2);
	return (FAILED);
}

t_bool	ft_print_generic_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (FAILED);
}

t_bool	ft_print_sorted_status(void)
{
	ft_putstr_fd("It is arranged\n", 1);
	return (SUCCESS);
}
