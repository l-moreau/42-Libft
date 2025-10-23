/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:10:07 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/23 15:39:16 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	return (dest_len + src_len);
}

/*#include <stdio.h>
int main()
{
	char dest[100] = "Bonjour";
	char src[] = "Toiii";
	size_t len = 10;
	size_t len_strlcat = ft_strlcat(dest, src, len);
	printf("%s\n", dest);
	return 0;
}*/
