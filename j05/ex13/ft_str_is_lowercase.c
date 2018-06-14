/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:59:41 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 16:46:17 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char	test1[] = "abonjourz";
	char	test2[] = "bonJoUr";
	char	test3[] = "bon8jo54ur";
	char	test4[] = "";

	printf("%d\n", ft_str_is_lowercase(test1));
	printf("%d\n", ft_str_is_lowercase(test2));
	printf("%d\n", ft_str_is_lowercase(test3));
	printf("%d\n", ft_str_is_lowercase(test4));
	return (0);
}
