/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:09:04 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/08 13:42:41 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrchr(const char *str, int c)
{
	char	i;
	int		icheck;

	icheck = 0;
	while (*str)
	{
		if (*str == c)
		{
			icheck = 1;
			i = str;
		}
		str++;
	}
	if (*str == '\0')
		return (str);
	if (i == 0)
		return (0);
	return (i);
}
/*
int	main(void)
{
	const char	*x;

	x = "test";
	ft_strrchr(x, 't');
}
*/