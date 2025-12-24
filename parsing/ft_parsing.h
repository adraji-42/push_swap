/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:44:45 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:09:24 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

# include "../ft_push_swap.h"

// --- PREVENTS REDEFINITON CONFLICTS IF THE STANDARD <limits.h> HEADER ---

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

typedef struct s_int_limits
{
	long	num;
	t_bool	overflow;
}	t_ilimits;

t_ilimits	ft_atoi_limit(const char *nptr);
char		*ft_strsjoin_check(int size, char **strs);
t_bool		ft_is_signe(char c);
t_bool		ft_is_num_spc(char c);
t_bool		ft_is_valid(char c, char nc);

#endif
