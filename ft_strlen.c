/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:06:31 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:33:26 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char a[] = "Bonjour";
// 	printf("%ld\n", ft_strlen(a));
// 	return 0;
// }
