/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:44:01 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/07 15:46:33 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	x;
	char	y;
	char	z;

	x = 'a';
	y = 'A';
	z = 'x';
	printf("%c", ft_toupper(x));
	printf("%c", ft_toupper(y));
	printf("%c", ft_toupper(z));
}
*/