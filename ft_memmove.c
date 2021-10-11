/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:25:18 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/07 13:54:07 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	int		count;
	char	*temp;

	count = 0;
	while (n > count)
	{
		((unsigned char *)src)[count] = ((unsigned char *)dest)[count];
		count++;
	}
	return (dest);
}
