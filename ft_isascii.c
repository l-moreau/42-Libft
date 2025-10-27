/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:31:28 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/27 09:34:26 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (c);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isascii(''));
	printf("%d\n", isascii(''));
	return 0;
}*/
