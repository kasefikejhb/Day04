/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 16:52:13 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/17 16:57:00 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_recursive_factorial(int nb)
{
	if(nb == 0)
	{
		return (1);
	}
	else if (nb > 100 || nb < 0)
	{
		return(0);
	}

	if (nb > 1)
	{
		return(ft_recursive_factorial);
	}
}

