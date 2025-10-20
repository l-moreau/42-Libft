/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.s19.be>            +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:58:08 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/20 10:55:04 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isalpha('f'));
	printf("%d\n", isalpha('f'));
	return 0;
}*/
