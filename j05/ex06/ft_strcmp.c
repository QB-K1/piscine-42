/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:46:43 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/18 10:41:00 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("1 lui : %d\n", strcmp("callade", "ballade"));
	printf("1 moi : %d\n", ft_strcmp("callade", "ballade"));
	printf("2 lui : %d\n", strcmp("callade", "callada"));
	printf("2 moi : %d\n", ft_strcmp("callade", "callada"));
	printf("3 lui : %d\n", strcmp("ballade", "callade"));
	printf("3 moi : %d\n", ft_strcmp("ballade", "callade"));
	printf("4 lui : %d\n", strcmp("callada", "callade"));
	printf("4 moi : %d\n", ft_strcmp("callada", "callade"));
	printf("5 lui : %d\n", strcmp("ballade", "ballade"));
	printf("5 moi : %d\n", ft_strcmp("ballade", "ballade"));
	return (0);
}
