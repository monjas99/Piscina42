/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:24:30 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/09 18:05:12 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a / *b;
	*b = *a % *b;
	*a = i;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pnta;
	int	*pntb;

	a = 6;
	b = 3;
	pnta = &a;
	pntb = &b;
	ft_ultimate_div_mod(pnta, pntb);
	printf("%i\n", a);
	printf("%i\n", b);
	return (0);
}*/
