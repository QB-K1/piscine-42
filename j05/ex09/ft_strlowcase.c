/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 23:18:44 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/15 11:45:57 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

int		main(void)
{
	char	test[] = "bONjOUr 47 '}]@#-+ RED.,";

	printf("%s\n", test);
	printf("%s\n", ft_strlowcase(test));
	return (0);
}
