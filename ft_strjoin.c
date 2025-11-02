/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:35:56 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 12:07:52 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len_s1 + 1);
	ft_strlcat(res, s2, len_s2 + len_s1 + 1);
	return (res);
}

// #include <stdio.h>
// int main()
// {
//     printf("%s\n", ft_strjoin("", ""));
//     return 0;   
// }