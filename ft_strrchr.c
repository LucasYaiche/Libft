/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:09:04 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:39:59 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*i;
	int		icheck;

	icheck = 0;
	while (*str)
	{
		if (*str == c)
		{
			icheck = 1;
			i = (char *)str;
		}
		str++;
	}
	if (*str == '\0')
		return ((char *)str);
	if (i == 0)
		return (0);
	return (i);
}
/*
int	main(void)
{
	const char	*x;

	x = "test";
	ft_strrchr(x, 't');
}
*/