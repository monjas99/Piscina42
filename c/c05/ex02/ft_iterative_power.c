/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:34:46 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/21 13:04:04 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	resultado = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		resultado = resultado * nb;
		power--;
	}
	return (resultado);
}
/*
int	main(void)
{
	printf("%d" ,ft_iterative_power(3, 5));
	return (0);
}*/
