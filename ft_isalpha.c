/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:45:40 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/14 16:36:31 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
		return (0);
	return (1);
}

/*
int main()
{
   int x; 
   x = 'a'; 
   if (ft_isalpha(x))
        printf("1"); 
}
*/