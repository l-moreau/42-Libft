/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreau <lmoreau@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:21:19 by lmoreau           #+#    #+#             */
/*   Updated: 2025/10/28 11:49:49 by lmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!f || !s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void to_switch(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'A' && *c <= 'Z')
//         *c += 32;
// 	else if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int main(void)
// {
//     char str[] = "BoNjoUr ToI !";

//     printf("Avant : %s\n", str);
//     ft_striteri(str, to_switch);
//     printf("Après : %s\n", str);
//     return 0;
// }
