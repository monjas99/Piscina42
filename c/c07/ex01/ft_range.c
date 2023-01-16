/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:38:30 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/25 08:50:46 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*x;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
		return (NULL);
	x = (int *) malloc (sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}
/*
int main(void)
{
	int min;
	int max;

	min = 1;
	max = 5;
	ft_range(min, max);
	return (0);
}*/
