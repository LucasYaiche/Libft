/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:35:24 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:40:48 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get(int len)
{
	char	*str;

	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strdup(const char	*s)
{
	int		len;
	char	*s2;
	int		i;

	len = ft_strlen(s);
	i = 0;
	s2 = get(len);
	if (!s2)
		return (NULL);
	while (i <= len)
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}

/*
int main()
{
  char source[] = "GeeksForGeeks";
  char *target = ft_strdup(source);
  printf("%s", target);
}
*/