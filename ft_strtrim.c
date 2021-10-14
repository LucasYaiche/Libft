/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:36:43 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:39:47 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get(size_t len)
{
	char	*returned;

	returned = malloc(sizeof(*returned) * (len));
	if (!returned)
		return (0);
	return (returned);
}

static int	ft_check(char s, char const *set)
{
	while (*set)
	{
		if (s == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*answer;
	char	*returned;

	answer = get(ft_strlen(s1));
	returned = answer;
	while (*s1)
	{
		if (!(ft_check(*s1, set)))
			*answer++ = *s1;
		s1++;
	}
	return (returned);
}
