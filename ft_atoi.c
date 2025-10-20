/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:47:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/20 11:28:13 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	moins;
	int	res;

	i = 0;
	moins = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			moins *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * moins);
}
/*#include <stdio.h>
int main()
{
	const char *str = "   -1234abc";
	int num = ft_atoi(str);
	printf("%d\n", num);
	return 0;
}*/
