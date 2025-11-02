/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:31:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/11/02 11:49:32 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d\n", ft_isascii(0));
// 	printf("%d\n", isascii(0));
// 	return 0;
// }
