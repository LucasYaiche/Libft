/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:32:50 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/16 15:02:27 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;

	if (n != 0)
	{	
		t = (unsigned char *)s;
		while (n > 0)
		{
			if (*t == ((unsigned char) c))
				return (t);
			t++;
			n--;
		}
	}
	return (0);
}
/*
int	main()
{
	void	*answer;
	char	*s = "test1";
	size_t	n;

	n = 5;
	answer = ft_memchr(s, 't', n);
}
*/