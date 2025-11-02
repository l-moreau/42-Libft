/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:57:34 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 12:45:41 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	exist(char c1, char const *set)
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
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && exist(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && exist(s1[end - 1], set))
		end--;
	res = ft_substr(s1, start, end - start);
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_strtrim("ab cd  f    ", " "));
// }