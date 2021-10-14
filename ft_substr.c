/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:30:02 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:39:17 by lyaiche          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*answer;
	int		i;

	i = 0;
	answer = get(len);
	if (!answer)
		return (NULL);
	while (answer)
	{
		*answer++ = s[start + i++];
	}
	return (answer);
}
