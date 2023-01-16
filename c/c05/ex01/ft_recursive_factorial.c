/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:16:09 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/21 13:04:25 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
		return (nb * (ft_recursive_factorial(nb - 1)));
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(4));
	return (0);
}*/
