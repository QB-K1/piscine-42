/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:41:24 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 15:41:00 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	a;
	int		b;

	i = 0;
	b = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		a = str[i];
		if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)))
			b = 1;
		else
			return (0);
		i++;
	}
	return (b);
}

int		main(void)
{
	char	test1[] = "BonJouR";
	char	test2[] = "3BonJ2ou3R";
	char	test3[] = "";

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	return (0);
}
