/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:12:16 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:37:23 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (n > count)
	{
		((unsigned char *)src)[count] = ((unsigned char *)dest)[count];
		count++;
	}
	return (dest);
}
