/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:33:47 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/16 20:35:32 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_error(char *base)
{
	int	i;
	int	j;
	char aux;

	j = 0;
	i = 0;
	while (base[i] != '\0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);		
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (1);
}
