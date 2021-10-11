/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:33:56 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/10 22:58:55 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
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
	z = ' ';
	printf("%c", ft_toupper(x));
	printf("%c", ft_toupper(y));
	printf("%c", ft_toupper(z));
}
*/