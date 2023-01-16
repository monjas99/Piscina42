/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 03:03:17 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/24 16:27:04 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*x;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	x = (char *) malloc (sizeof(char) * size - 1);
	if (x == NULL)
		return (1);
	i = 0;
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
/*
int main(void)
{
    char cadena[] = "hola";
    printf("%s", ft_strdup(cadena));
    return (0);
}*/
