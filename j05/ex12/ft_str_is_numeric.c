/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:45:01 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 15:56:01 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}

int		main(void)
{
	char	test1[] = "15789";
	char	test2[] = "478r64w12";
	char	test3[] = "";

	printf("%d\n", ft_str_is_numeric(test1));
	printf("%d\n", ft_str_is_numeric(test2));
	printf("%d\n", ft_str_is_numeric(test3));
	return (0);
}
