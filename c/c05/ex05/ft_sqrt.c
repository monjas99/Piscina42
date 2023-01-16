/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:07:03 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/22 20:21:25 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb)
	{
		if (i > 46340)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = 9;
	printf("%d", ft_sqrt(i));
	return (0);
}*/
