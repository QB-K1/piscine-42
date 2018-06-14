/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:46:43 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/18 10:32:53 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
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
	printf("1 lui : %d\n", strncmp("callade", "ballade", 3));
	printf("1 moi : %d\n", ft_strncmp("callade", "ballade", 3));
	printf("2 lui : %d\n", strncmp("callade", "callada", 5));
	printf("2 moi : %d\n", ft_strncmp("callade", "callada", 5));
	printf("3 lui : %d\n", strncmp("ballade", "callade", 3));
	printf("3 moi : %d\n", ft_strncmp("ballade", "callade", 3));
	printf("4 lui : %d\n", strncmp("callada", "callade", 5));
	printf("4 moi : %d\n", ft_strncmp("callada", "callade", 5));
	printf("5 lui : %d\n", strncmp("callad\0a", "callad\0e", 8));
	printf("5 moi : %d\n", ft_strncmp("callad\0a", "callad\0e", 8));
	return (0);
}
