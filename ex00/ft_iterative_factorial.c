/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 16:49:35 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/17 16:51:35 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int factorial(int nb)
{
	if (nb == 0)
	{
		return 1;
	}
	return nb * factorial(nb - 1);
}
