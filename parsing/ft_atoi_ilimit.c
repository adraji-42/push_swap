/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ilimit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 08:38:14 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 16:38:59 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parsing.h"

t_ilimits	ft_atoi_ilimit(const char *nptr)
{
	t_ilimits	n;
	long		res;
	int			sign;

	res = 0;
	sign = 1;
	n.overflow = TRUE;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		if ((sign == 1 && res > 2147483647)
			|| (sign == -1 && res > 2147483648))
			return (n);
		nptr++;
	}
	n.num = (int)(res * sign);
	n.overflow = FALSE;
	return (n);
}
