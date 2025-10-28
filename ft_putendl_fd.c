/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:29:54 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/28 11:19:39 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd != -1)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}
// int main()
// {
// 	char c[100] = "Coycou";
// 	int fd;
// 	fd = open("seal", O_WRONLY);
// 	ft_putendl_fd(c, fd);
// 	return 0;
// }