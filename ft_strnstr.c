/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:46:40 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:33:35 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	const char	*s;
	const char	*f;
	size_t		l;

	if (*find == '\0')
		return ((char *)src);
	while (*src != '\0' && len > 0)
	{
		s = src;
		f = find;
		l = len;
		while (*s != '\0' && *f != '\0' && l > 0 && *s == *f)
		{
			s++;
			f++;
			l--;
		}
		if (*f == '\0')
			return ((char *)src);
		src++;
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	const char *text = "Bonjour tout le monde";
	const char *mot = "tout";
	size_t lin = 30;
	char *res = ft_strnstr(text, mot, lin);
	if (res != NULL)
		printf("Trouveee ; %s\n", res);
	else
		printf("Y a pas chef ; %ld\n", lin);
	return 0;
}*/