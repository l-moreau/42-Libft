/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:32:27 by lmoreau           #+#    #+#             */
/*   Updated: 2026/02/08 11:31:47 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lstclear(t_list **lst)
{
	t_list *tmp;
	if (lst)
	{
		while(*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}