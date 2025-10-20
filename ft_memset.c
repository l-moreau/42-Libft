/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:28:51 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/20 12:09:57 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char buffer[20];

	i = 0;
	ft_memset(buffer, 'A', sizeof(buffer));
	buffer[sizeof(buffer) - 1] = '\0';
	printf("%s\n", buffer);
	return 0;
}*/
