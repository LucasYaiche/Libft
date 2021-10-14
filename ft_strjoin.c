/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:20:03 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:40:28 by lyaiche          ###   ########.fr       */
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

char	*strjoin(char const *s1, char const *s2)
{
	char	*answer;
	char	*returned;

	answer = get(ft_strlen(s1) + ft_strlen(s2));
	returned = answer;
	if (!answer)
		return (NULL);
	while (*s1)
		*answer++ = *s1++;
	while (*s2)
		*answer++ = *s2++;
	return (returned);
}
