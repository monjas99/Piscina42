/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:47:35 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/09 18:04:51 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main(void)
{	
	int	a;
	int	b;
	int	*pnta;
	int	*pntb;

	a = 49;
	b = 51;
	pnta = &a;
	pntb = &b;
	ft_swap(pnta, pntb);
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
	return (0);
}
*/