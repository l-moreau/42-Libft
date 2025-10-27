/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:32:03 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:34:20 by lmoreau          ###   ########.fr       */
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