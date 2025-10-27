/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:32:35 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:34:29 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isprint(31));
	printf("%d\n", isprint(31));
	return 0;
}*/
