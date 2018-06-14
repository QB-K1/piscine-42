/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:59:41 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 17:28:19 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char	test1[] = "! # $ % * 8 J q } ~ z";
	char	test2[] = "";

	printf("%d\n", ft_str_is_printable(test1));
	printf("%d\n", ft_str_is_printable(test2));
	return (0);
}
