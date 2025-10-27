/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:35:56 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 13:23:38 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	cat;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc(len_s1 + len_s2 + 1);
	while (!res)
		return (NULL);
	cat = ft_strlcat(res, s1, len_s1 + 1);
	cat = ft_strlcat(res, s2, len_s2 + len_s1 + 1);
	return (res);
}

// #include <stdio.h>
// int main()
// {
//     printf("%s\n", ft_strjoin("Bonjour", "Toiiiiii"));
//     return 0;   
// }