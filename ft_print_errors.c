/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 13:24:23 by adraji            #+#    #+#             */
/*   Updated: 2025/12/21 08:29:16 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_allocation_error(void)
{
	ft_putstr_fd("Error:\n\tFaild allocation.", 2);
	return (FAILED);
}

int	ft_print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (FAILED);
}
