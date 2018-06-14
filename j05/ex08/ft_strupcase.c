/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 23:18:44 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/15 10:58:11 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

int		main(void)
{
	char	test[] = "BonJouR 47 '}]@#-+ red.,";

	printf("%s\n", test);
	printf("%s\n", ft_strupcase(test));
	return (0);
}
