/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:43:57 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/06 16:06:01 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int str)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
		return (0);
	return (1);
}

int	ft_isdigit(int str)
{
	if (!(str >= '0' && str <= '9'))
		return (0);
	return (1);
}

int	ft_isalnum(int str)
{
	if (ft_isalpha(str) || ft_isdigit(str))
		return (1);
	return (0);
}

/*
int main()
{
   int x = 'A'; 
   if (ft_isalnum(x))
        printf("1"); 
}
*/