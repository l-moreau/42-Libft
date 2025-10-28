/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:57:34 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/28 16:03:39 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chercher(char s1c, const char *set, char signe)

{

	int	i;



	i = 0;

	while (set[i])

	{

		if (s1c == set[i])

		{

			if (signe == '+')

				return (1);

			else

				return (-1);

		}

		else

			i++;

	}

	return (0);

}



static int	minitrim(const char *s1, const char *set, char signe)

{

	int	i;

	int	x;



	if (signe == '+')

	{

		i = 1;

		x = 0;

	}

	else

	{

		i = -1;

		x = ft_strlen(s1) - 1;

	}

	while (i != 0 && s1[x])

	{

		i = ft_chercher(s1[x], set, signe);

		if (i != 0)

			x += i;

	}

	return (x);

}



static char	*dup(const char *s1, char *resultat, int j, int h)

{

	int	i;

	int	l;



	l = 0;

	i = 0;

	while (i < j)

		i++;

	while (i <= h)

		resultat[l++] = s1[i++];

	return (resultat);

}



char	*ft_strtrim(char const *s1, char const *set)

{

	int		j;

	int		h;

	char	*resultat;



	if (!s1 || !set)

		return (NULL);

	j = minitrim(s1, set, '+');

	h = minitrim(s1, set, '-');

	resultat = malloc(sizeof(char) * (ft_strlen(s1) - j - (ft_strlen(s1) - h)));

	if (!resultat)

		return (NULL);

	resultat = dup(s1, resultat, j, h);

	return (resultat);

}

#include <stdio.h>

int main()

{

	char s1[] = "666bonjour5454";

	char set[] = "54654";



	printf("%s\n", ft_strtrim(s1, set));

}