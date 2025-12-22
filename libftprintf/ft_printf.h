/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:09:44 by adraji            #+#    #+#             */
/*   Updated: 2025/12/21 12:24:04 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

# define TRUE 1
# define FALSE 0

# ifndef INT_MAX
#  define INT_MAX __INT_MAX__
# endif

typedef char	t_bool;

typedef struct s_lens_print_data
{
	int	len_data;
	int	len_zeros;
	int	len_padding;
	int	total_content_len;
}	t_lens;

typedef struct s_print_count
{
	int	index;
	int	current_print;
	int	total_printed;
}	t_vars;

typedef struct s_norminette
{
	t_lens	len;
	t_vars	var;
}	t_levas;

typedef struct s_flags
{
	t_bool	minus;
	t_bool	zero;
	t_bool	dot;
	t_bool	hash;
	t_bool	plus;
	t_bool	space;
	long	width;
	long	precision;
	char	specifier;
}	t_flags;

int	ft_printf(const char *fms, ...);

#endif
