/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:21:15 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/14 08:10:56 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	a;

	i = 0;
	while (i < size -1)
	{
		a = i + 1;
		while (a < size)
		{
			if (tab[a] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[a];
				tab[a] = tmp;
			}
			a++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {'5', '3', '2', '4'};

	size = '3';
	ft_sort_int_tab(tab, size);

	return (0);
}*/
