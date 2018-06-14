/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 16:20:18 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/06 12:18:42 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		a = a + 1;
		str = str + 1;
	}
	return (a);
}

int		main(void)
{
	char *str;

	str = "geekologies";
	printf("%d", ft_strlen(str));
	return (0);
}
