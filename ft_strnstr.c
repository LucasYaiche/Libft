/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:37:29 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/16 13:39:18 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i + j] != s2[j])
				break ;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)(&s1[i]));
		i++;
	}
	return (0);
}
