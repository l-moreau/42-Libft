/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:35:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 12:32:23 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	s_len;
	char	*res;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	j = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (j < len && s[start] != '\0')
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char *result = ft_substr("hola", 7123231, 0);
// 	if (result)
// 		printf("%s\n", result);
// 	return 0;
// }