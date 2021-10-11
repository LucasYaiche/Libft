/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:46 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/06 16:50:49 by lyaiche          ###   ########.fr       */
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

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	while (srcsize--)
		dst[dstsize + 1] = src++;
	return (ft_strlen(dst));
}
