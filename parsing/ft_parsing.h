/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:44:45 by adraji            #+#    #+#             */
/*   Updated: 2025/12/21 11:49:54 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

# include "../push_swap.h"

// --- PREVENTS REDEFINITON CONFLICTS IF THE STANDARD <limits.h> HEADER ---

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# define IS_SIGNE(c) ((c == '-' || c == '+'))
# define IS_NBR_SPC(c) ((c == ' ' || ft_isdigit(c)))
# define IS_VALID(c, nc) (((IS_NBR_SPC(c)) || (IS_SIGNE(c) && ft_isdigit(nc))))

typedef struct s_int_limits
{
	long	num;
	t_bool	overflow;
}	t_ilimits;

t_ilimits	ft_atoi_limit(const char *nptr);
char		*ft_strsjoin_check(int size, char **strs);

#endif
