/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:48:26 by dmonjas-          #+#    #+#             */
/*   Updated: 2022/11/21 02:02:40 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		if (str[i] >='a' && str[i]  <= 'z')
		{
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
						|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] -= 32;
		}
		i++;
	}
	
	return (str);
}
/*
int main()
{
    char	p[] = "salUt, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(p));
    return 0;
}*/
