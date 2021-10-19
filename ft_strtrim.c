/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:36:43 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/19 17:43:50 by lucasyaiche      ###   ########.fr       */
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
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!(ft_check(s1[i], set)))
			len++;
		i++;
	}
	answer = get(len);
	returned = answer;
	i = 0;
	while (s1[i])
	{
		if (!(ft_check(s1[i], set)))
			*answer++ = s1[i];
		i++;
	}
	*answer++ = '\0';
	return (returned);
}
