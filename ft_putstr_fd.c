/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:52:22 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 13:10:41 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd != -1)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// int main()
// {
// 	char c[100] = "Helloooo";
// 	int fd;
// 	fd = open("seal", O_WRONLY);
// 	ft_putstr_fd(c, fd);
// 	return 0;
// }