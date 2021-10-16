/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:18:43 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/16 13:38:33 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
