/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:10:37 by adraji            #+#    #+#             */
/*   Updated: 2025/12/24 10:09:14 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_list	**get_list(void)
{
	static t_list	*list;

	return (&list);
}

void	ft_del(void *ptr)
{
	free(ptr);
}

int	ft_free(int (*print)(void))
{
	t_list	**head;

	head = get_list();
	ft_lstclear(head, ft_del);
	free(*head);
	*head = NULL;
	if (!print)
		return (SUCCESS);
	print();
	return (FAILED);
}

void	*ft_malloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (!res)
		exit(ft_free(ft_allocation_error));
	ft_lstadd_back(get_list(), ft_lstnew(res));
	return (res);
}
