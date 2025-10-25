/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:41:17 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/25 09:07:37 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] != 0 && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i);
}

/*#include <stdio.h>
int main()
{
	char a[100];
	char b[] = "Bonjour";
	size_t size = 3;
	ft_strlcpy(a,b,size);
	printf("%s\n", a);
	return 0;
}*/
