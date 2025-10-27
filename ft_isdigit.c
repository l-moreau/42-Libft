/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:32:27 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:34:27 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (c);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isdigit('q'));
	printf("%d\n", isdigit('q'));
	return 0;
}*/
