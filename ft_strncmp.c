/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:10:54 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:38:08 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (*s1 && n && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int main()
{
	int		answer;
	const	char *str1 = "test";
	const	char *str2 = "test";
	size_t	n;

	n = 5;
	answer = ft_strncmp(str1, str2, n);
	printf("%d", answer);
}
*/