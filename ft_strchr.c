/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:53:41 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:37:43 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str++)
	{
		if (*str == c)
			return ((char *)str);
	}
	return (0);
}

/*
int	main(void)
{
	const char	*x;

	x = "test";
	ft_strchr(x, 'e');
}
*/