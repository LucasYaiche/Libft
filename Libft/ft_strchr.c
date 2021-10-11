/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:53:41 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/07 18:30:19 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str++)
	{
		if (*str == c)
			return ((char *)str);
	}
	return (0);
}

/*
int	main(void)
{
	const char	*x;

	x = "test";
	ft_strchr(x, 'e');
}
*/