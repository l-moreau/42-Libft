/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:46:46 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 11:38:15 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_int(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		int_len;

	nb = n;
	int_len = ft_strlen_int(nb);
	str = (char *)malloc((int_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[int_len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	int_len--;
	while (nb)
	{
		str[int_len] = '0' + (nb % 10);
		nb = nb / 10;
		int_len--;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	int i;
// 	i = -2147483648;
// 	printf("Answer: %s\n", ft_itoa(i));
// 	return 0;
// }