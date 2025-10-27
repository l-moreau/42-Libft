/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:31:54 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 13:09:00 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int i;
// 	char buffer[10] = "Bonjour";

// 	i = 0;
// 	ft_bzero(buffer, 10);
// 	while (i < 10)
// 	{
// 		printf("%02x", (unsigned char)buffer[i]);
// 		i++;
// 	}
// 	return 0;
// }