/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:44:02 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/24 16:56:10 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*x;
	int		i;
	int		j;
	int		tam1;
	int		tam2;
	int		tam3;

	tam1 = ft_len(strs[0]);
	tam2 = ft_len(strs[2]);
	tam3 = ft_len(sep);
	j = 0;
	i = 0;
	x = (char*) malloc(sizeof(char) * (tam1 + tam2 + tam3 + 1));
	while (strs[0][j])
	{
		x[i] = strs[0][j];
		j++;
		i++;
	}
	j = 0;
	while (sep[j])
	{
		x[i] = sep[j];
		j++;
		i++;
	}
	j = 0;
	while (strs[1][j])
	{
		x[i] = strs[1][j];
		j++;
		i++;
	}
	return (x);
}

int	main(void)
{
	char	**strs;
	char	*sep;
	int		size;

	size = 2;
	sep = "pepe";
	strs[0] = "hola";
	strs[1] = "mundo";
	ft_strjoin(size, strs, sep);
	return (0);
}
