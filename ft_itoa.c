/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:46:46 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/30 12:22:12 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	const char	*s_len;
	char		s_bis;

	s_len = ft_strlen((const char *)n);
	s_bis = malloc(s_len * (sizeof (char)));
}

#include <stdio.h>
int main()
{
	int i;
	i = 52;
	printf("%s\n", ft_itoa(i));
	return 0;
}