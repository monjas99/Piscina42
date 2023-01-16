/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:50:59 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/15 12:53:54 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
    char cadena1[] = "ados";
    char cadena2[] = "aDios";

    ft_strcmp(cadena1, cadena2);
    printf("%d", ft_strcmp(cadena1, cadena2));
    return (0);
}*/
