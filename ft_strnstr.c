/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:46:40 by lmoreau           #+#    #+#             */
/*   Updated: 2026/01/09 10:45:51 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*s;
	const char	*f;
	size_t		l;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0' && len > 0)
	{
		s = big;
		f = little;
		l = len;
		while (*s != '\0' && *f != '\0' && l > 0 && *s == *f)
		{
			s++;
			f++;
			l--;
		}
		if (*f == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}