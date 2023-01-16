/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:06:00 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/20 22:51:33 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	valor;

	valor = 0;
	count = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valor = (valor * 10) + str[i] - 48;
		i++;
	}
	if ((count % 2) != 0)
		return (-valor);
	else
		return (valor);
}
/*
int main(void)
{
	char str[] = "   --+-+1234hg b345";

	printf("%d", ft_atoi(str));
	return (0);
}*/
