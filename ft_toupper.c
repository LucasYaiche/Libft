/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:33:56 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:38:33 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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