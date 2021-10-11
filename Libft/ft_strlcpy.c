/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:18:43 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/06 16:22:53 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	dstsize -= 1;
	if (dstsize >= 0)
	{
		while (dstsize--)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (ft_strlen(src));
}
