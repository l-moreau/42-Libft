/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:51:45 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/26 16:52:01 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	new = (void *) malloc(nmemb * size);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}

// #include <stdio.h>
// int main() {
// 	char *a = (char *) ft_calloc(5, sizeof(char));
// 	if (!a)
// 		return 1;
// 	a[0] = 'c';
// 	printf("%c\n", a[0]);
// 	return 0;
// }