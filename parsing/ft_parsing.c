/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:58:55 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 14:58:29 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parsing.h"

static t_tab	*ft_creat_tab(char *joined)
{
	int		i;
	t_tab	*tab;

	i = 0;
	tab = ft_malloc(sizeof(t_tab));
	tab->size = 0;
	while (joined[i])
	{
		while (joined[i] && joined[i] == ' ')
			i++;
		if (joined[i])
			tab->size++;
		while (joined[i] && (ft_is_signe(joined[i]) || ft_isdigit(joined[i])))
			i++;
	}
	if (tab->size <= 0)
		exit(ft_free(ft_print_error));
	if (tab->size < 2)
		exit(SUCCESS);
	tab->tab = ft_malloc(sizeof(int) * tab->size);
	return (tab);
}

static t_tab	*ft_get_tab(char *joined)
{
	t_ilimits	num;
	t_tab		*tab;
	int			index;
	int			indexj;

	index = 0;
	indexj = 0;
	tab = ft_creat_tab(joined);
	while (joined[index])
	{
		while (joined[index] == ' ')
			index++;
		if (!joined[index])
			break ;
		num = ft_atoi_ilimit(&joined[index]);
		if (num.overflow)
			exit(ft_free(ft_print_error));
		tab->tab[indexj++] = num.num;
		if (ft_is_signe(joined[index]))
			index++;
		while (ft_isdigit(joined[index]))
			index++;
	}
	return (tab);
}

static void	ft_is_uniq(t_tab *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < tab->size)
	{
		j = i + 1;
		while (j < tab->size)
		{
			if (tab->tab[i] == tab->tab[j])
				exit(ft_free(ft_print_error));
			j++;
		}
		i++;
	}
}

t_tab	ft_parsing(int size, char **strs)
{
	t_tab	t;
	t_tab	*tab;
	char	*joined;

	joined = ft_strsjoin_check(size, strs);
	tab = ft_get_tab(joined);
	ft_is_uniq(tab);
	// ft_is_sorted();
	t.size = tab->size;
	t.tab = malloc(sizeof(int) * t.size);
	if (!t.tab)
		exit(ft_free(ft_allocation_error));
	ft_memcpy(t.tab, tab->tab, sizeof(int) * t.size);
	ft_free(NULL);
	return (t);
}
