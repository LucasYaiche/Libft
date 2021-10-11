/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:10:30 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/05 14:11:31 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	int	count;

	count = 0;
	while (n > count)
	{
		((unsigned char *)s)[count] = '\0';
		count++;
	}
	return (s);
}
