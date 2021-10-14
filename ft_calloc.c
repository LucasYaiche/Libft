/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:28:54 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:41:28 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
