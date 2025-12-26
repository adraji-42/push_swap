/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:59:46 by adraji            #+#    #+#             */
/*   Updated: 2025/12/26 10:29:56 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parsing.h"

t_bool	ft_is_signe(char c)
{
	return (c == '-' || c == '+');
}

t_bool	ft_is_num_spc(char c)
{
	return (c == ' ' || ft_isdigit(c));
}

t_bool	ft_is_valid(char c, char nc)
{
	return ((ft_is_num_spc(c)) || (ft_is_signe(c) && ft_isdigit(nc)));
}

static size_t	ft_strs_lens(int size, char **strs)
{
	int		i;
	size_t	j;
	t_bool	hav_num;
	size_t	total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		hav_num = FALSE;
		while (strs[i][j])
		{
			if (!hav_num && ft_isdigit(strs[i][j]))
				hav_num = TRUE;
			if (!ft_is_valid(strs[i][j], strs[i][j + 1]))
				exit(ft_print_generic_error());
			j++;
		}
		if (!hav_num)
			exit(ft_print_generic_error());
		total_size += j;
		i++;
	}
	return (total_size);
}

char	*ft_strsjoin_check(int size, char **strs)
{
	int		s_idx;
	size_t	s_jdx;
	size_t	re_idx;
	char	*result;

	result = ft_safe_malloc(sizeof(char) * (ft_strs_lens(size, strs) + size));
	re_idx = 0;
	s_idx = 0;
	while (s_idx < size)
	{
		s_jdx = 0;
		while (strs[s_idx][s_jdx])
			result[re_idx++] = strs[s_idx][s_jdx++];
		if (s_idx < size - 1)
			result[re_idx++] = ' ';
		s_idx++;
	}
	result[re_idx] = '\0';
	return (result);
}
