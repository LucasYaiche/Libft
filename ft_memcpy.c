/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:12:16 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/05 14:24:42 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	int	count;

	count = 0;
	while (n > count)
	{
		((unsigned char *)src)[count] = ((unsigned char *)dest)[count];
		count++;
	}
	return (dest);
}
