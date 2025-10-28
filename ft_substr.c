/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:35:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/28 09:28:02 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*res;

	if (!s)
		return (NULL);
	j = 0;
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	while (s[start] != '\0' && j < len)
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char const *s = "Bonjour tout le monde";
// 	unsigned int start = 5;
// 	size_t len = 4;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return 0;
// }