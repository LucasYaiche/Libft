/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:47:23 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/10 21:16:33 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;

	x = s1;
	y = s2;
	if (n != 0)
	{
		while (x && n && (x == y))
		{
			x++;
			y++;
			n--;
		}
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
