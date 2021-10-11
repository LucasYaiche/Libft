/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:37:29 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/11 14:50:59 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	if (s2[0] == '\0')
		return (s1);
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
			return (&s1[i]);
		i++;
	}
	return (0);
}
