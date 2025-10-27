/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:32:10 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:34:22 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (c);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isalnum(','));
    printf("%d\n", isalnum(','));
	return 0;
}*/
