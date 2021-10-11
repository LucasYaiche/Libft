/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:28:54 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/11 16:50:02 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (n > count)
	{
		((unsigned char *)s)[count] = '\0';
		count++;
	}
	return (s);
}

void	*ft_calloc(size_t elements, size_t len)
{
	void	*tab;

	if (!elements || !len)
		return (NULL);
	tab = malloc(elements * len);
	if (!tab)
		return (0);
	ft_bzero(tab, elements * len);
	return (tab);
}
