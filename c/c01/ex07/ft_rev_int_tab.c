/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:21:15 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/14 08:09:57 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	tmp = '0';
	i = 0;
	while (i <= size - 1)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		size--;
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {'1', '2', '3', '4'};

	size = 4;
	ft_rev_int_tab(tab, size);
	return (0);
}
*/
