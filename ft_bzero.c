/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:11:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/21 10:58:52 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char buffer[10] = "Bonjour";

	i = 0;
	ft_bzero(buffer, 10);
	while (i < 10)
	{
		printf("%02x", (unsigned char)buffer[i]);
		i++;
	}
	return 0;
}*/