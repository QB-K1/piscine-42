/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:59:41 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 16:58:56 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char	test1[] = "ABONJOURZ";
	char	test2[] = "BONjOuR";
	char	test3[] = "BONJ87U5R";
	char	test4[] = "";

	printf("%d\n", ft_str_is_uppercase(test1));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
	printf("%d\n", ft_str_is_uppercase(test4));
	return (0);
}
