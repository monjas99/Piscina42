/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:13:28 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/24 16:02:25 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/*
int main(void)
{
	printf("%d",ft_recursive_power(2, 2));
	return (0);
}*/
