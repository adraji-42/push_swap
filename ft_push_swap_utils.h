/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <adraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 07:54:05 by adraji            #+#    #+#             */
/*   Updated: 2025/12/18 15:05:23 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_UTILS_H
# define FT_PUSH_SWAP_UTILS_H

# include "push_swap.h"
# include "libftprintf/libftprintf.h"

typedef char	t_bool;

typedef struct s_dlist
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_dlist;

typedef struct s_stack
{
	t_dlist	*head;
	t_dlist	*tail;
	int		size;
}	t_stack;

#endif