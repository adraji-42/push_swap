/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:44:45 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 16:38:51 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

// --- REQUIRED LIBRARIES ---

# include "../ft_push_swap.h"

// --- MACROS FOR LIMITS ---

//  Ensures INT_MIN is defined for overflow checking.
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

// --- STRUCTURES FOR ERROR HANDLING ---

//  Structure to return both the converted number and an overflow status.
typedef struct s_int_limits
{
	int		num;
	t_bool	overflow;
}	t_ilimits;

// --- PARSING AND VALIDATION FUNCTIONS ---

//  Converts a string to a long and detects if it exceeds integer limits.
t_ilimits	ft_atoi_ilimit(const char *nptr);

//  Joins multiple strings into one while performing necessary checks.
char		*ft_strsjoin_check(int size, char **strs);

//  Checks if the character is a sign (+ or -).
t_bool		ft_is_signe(char c);

//  Checks if the character is a digit or a space.
t_bool		ft_is_num_spc(char c);

//  Validates the character in its context (e.g., sign followed by a digit).
t_bool		ft_is_valid(char c, char nc);

#endif
