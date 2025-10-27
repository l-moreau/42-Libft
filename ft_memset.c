/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:28:51 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 13:10:02 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char buffer[20];

	ft_memset(buffer, 'A', sizeof(buffer));
	buffer[sizeof(buffer) - 1] = '\0';
	printf("%s\n", buffer);
	return 0;
}*/
