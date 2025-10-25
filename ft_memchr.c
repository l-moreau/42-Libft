/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:22:05 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/25 09:35:23 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[] = "Bonjour";
	int c = 'v';
	size_t n = 7;
	char * result = ft_memchr(str, c, n);
	if (result != NULL)
	printf("TROUVEE A %ld ; %c\n", result - str, *result);
	else
	printf("Y a pas chef\n");
	return 0;
}*/