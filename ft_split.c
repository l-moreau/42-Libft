/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:26:10 by lmoreau           #+#    #+#             */
/*   Updated: 2026/01/09 10:45:18 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;
	int	flag;

	count = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (!flag)
				count++;
			flag = 1;
		}
		while (s[i] == c && s[i] != '\0')
		{
			i++;
			flag = 0;
		}
	}
	return (count);
}

static void	ft_free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_split_word(char **split, char const *s, int len, int i)
{
	int	j;

	split[i] = (char *)malloc((len + 1) * sizeof(char));
	if (!split[i])
		return (NULL);
	j = -1;
	while (++j < len)
		split[i][j] = s[j];
	split[i][j] = '\0';
	return (split[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = ft_word_len(s, c);
		if (!ft_split_word(split, s, len, i))
			return (ft_free_split(split), NULL);
		s += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}