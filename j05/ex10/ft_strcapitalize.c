/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:52:00 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 13:34:04 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;
	int		first;

	i = 0;
	while (str[i] != '\0')
	{
		first = 1;
		a = str[i - 1];
		if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
			first = 0;
		if ((a >= 48) && (a <= 57))
			first = 0;
		if ((first == 1) && (str[i] >= 97) && (str[i] <= 122))
			str[i] = (str[i] - 32);
		if ((first == 0) && (str[i] >= 65) && (str[i] <= 90))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

int		main(void)
{
	char	test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	test2[] = "BonJouR 47 @# -+ jack.,$ 47try rEd yoOOo .f5 ,5f /85";

	printf("%s\n", test);
	printf("%s\n", ft_strcapitalize(test));
	printf("\n");
	printf("%s\n", test2);
	printf("%s\n", ft_strcapitalize(test2));
	return (0);
}
