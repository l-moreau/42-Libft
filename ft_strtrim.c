/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:57:34 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 09:35:51 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	exist(char c1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c1 == set[i])
			return (true);
		i++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*strtrim;
	size_t	strtrim_len;

	i = 0;
	while (s1[i] && exist(s1[i], set))
		i++;
	strtrim_len = ft_strlen(&s1[i]);
	while (s1[strtrim_len] && exist(s1[strtrim_len], set))
		strtrim_len--;
	strtrim = ft_substr(s1, i, strtrim_len - i + 1);
	return (strtrim);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "666bonjour5454";
// 	char set[] = "54654";
// 	printf("%s\n", ft_strtrim(s1, set));
// }