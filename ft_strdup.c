/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:51:58 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/26 16:51:26 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen((char *)s);
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// # include <stdio.h>
// int main() {
// 	char *a = "salut";
// 	char *b = ft_strdup(a);
// 	if (!b) {
// 		printf("malloc failed\n");
// 		return 1;
// 	}
// 	printf("%s\n", b);
// 	b[0] = 'c';
// 	printf("%s\n", b);
// 	free(b);
// 	return 0;
// }