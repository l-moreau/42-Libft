/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:36:23 by lmoreau           #+#    #+#             */
/*   Updated: 2026/02/08 11:10:42 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list *tmp;
	if (!lst || !f)
		return ;
	tmp = lst;
	while(tmp)
	{
		f(lst->content);
		tmp = tmp->next;
	}
}