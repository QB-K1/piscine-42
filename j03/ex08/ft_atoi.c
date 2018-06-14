/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 18:41:18 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/09 17:34:27 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nega;
	int		value;

	i = 0;
	value = 0;
	nega = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
	|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '-') && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		nega = -1;
		i++;
	}
	if ((str[i] == '+') && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	value = value * nega;
	return (value);
}

int		main(void)
{
	char a[] = "+47";

	printf("%d\n", ft_atoi(a));
	printf("%d", atoi(a));
	return (0);
}
