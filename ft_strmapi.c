/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:22:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/28 11:20:05 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!f || !s)
		return (NULL);
	res = malloc((sizeof (char)) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>

// char test_func(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return ft_toupper(c);
//     else
//         return c;
// }

// int main(void)
// {
//     char *s = "bonjour";
//     char *res = ft_strmapi(s, test_func);

//     if (res)
//     {
//         printf("Original : %s\n", s);
//         printf("Résultat : %s\n", res);
//         free(res);
//     }
// }