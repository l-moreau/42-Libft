/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:27:12 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/30 11:46:56 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	a = 0;
	if (fd != -1)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n >= 0 && n < 10)
		{
			a = n + '0';
			write(fd, &a, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}

// #include <stdio.h>

// int main()
// {
//     int fd;
//     fd = open("seal", O_WRONLY);
//     ft_putnbr_fd(21, fd);
// 	return 0;
// }