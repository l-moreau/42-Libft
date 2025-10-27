/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:21:01 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 12:17:17 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}

// int main()
// {
// 	char c = 'c';
// 	int fd;
// 	fd = open("seal", O_WRONLY);
// 	ft_putchar_fd(c, fd);
// 	return 0;
// }