/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 12:25:40 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/06 18:23:12 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i = i + 1;
		str = str + 1;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int a;
	int b;
	int tmp;

	a = 0;
	b = ft_strlen(str) - 1;
	while (a < b)
	{
		tmp = str[a];
		str[a] = str[b];
		str[b] = tmp;
		a = a + 1;
		b = b - 1;
	}
	return (str);
}

int		main(void)
{
	char str[] = "uk!oj$tg*875@pm";

	printf("%s", ft_strrev(str));
	return (0);
}
