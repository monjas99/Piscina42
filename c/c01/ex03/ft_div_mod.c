/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:10:56 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/09 18:05:02 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*pntdiv;
	int	*pntmod;

	a = '6';
	b = '3';
	pntdiv = &div;
	pntmod = &mod;
	ft_div_mod(a, b, pntdiv, pntmod);
	printf("%i\n", div);
	printf("%i\n", mod);
	return (0);
}*/
