/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:33:43 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/21 13:10:00 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultado;

	i = 1;
	resultado = 1;
	if (nb == '0')
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (i <= nb)
		{
			resultado = resultado * i;
			i++;
		}
	}
	return (resultado);
}
/*
int	main(void)
{
	printf("%d",ft_iterative_factorial(4));
	return (0);
}*/
