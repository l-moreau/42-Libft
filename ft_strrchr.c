/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 08:33:21 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/25 08:42:07 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	int i;
	const char *last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}

/*#include <stdio.h>
int main()
{
	char s[100] = "Bonjour";
	int c = 'o';
	printf("%s\n", ft_strrchr(s, c));
	return 0;
}*/