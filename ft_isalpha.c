/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasyaiche <lucasyaiche@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:45:40 by lucasyaiche       #+#    #+#             */
/*   Updated: 2021/10/07 13:58:55 by lucasyaiche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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