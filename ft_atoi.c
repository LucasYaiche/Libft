/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:53:30 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/11 15:33:22 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *num)
{
	int	negative;
	int	answer;

	answer = 0;
	negative = 1;
	while (*num == ' ')
		num++;
	if (*num == '-' || *num == '+')
	{
		if (*num == '-')
			negative *= -1;
		num++;
	}
	if (!(*(num + 1) >= 48 && *(num + 1) <= 57))
		return (0);
	while (*num++ >= 48 && *num++ <= 57)
	{
		answer = answer * 10 + (*num - 48);
		num++;
	}
	return (answer * negative);
}
/*
int main() {
  const char *str = "++42";
  printf("%d\n", ft_atoi(str));
  printf("%d\n", atoi(str));
  return 0;
}
*/