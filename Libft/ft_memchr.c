/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:32:50 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/10 19:46:22 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;

	if (n != 0)
	{	
		t = (unsigned char *)s;
		while (n-- != 0)
		{
			if (*t++ == ((unsigned char) c))
				return (t);
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