/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:23:37 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/20 18:17:56 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if ((tab = (int*)malloc(sizeof(*tab) * (max - min))) == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int		*tab;

	tab = ft_range(5, 9);
	if (tab != 0)
	{
		printf("%d\n", tab[0]);
		printf("%d\n", tab[1]);
		printf("%d\n", tab[2]);
		printf("%d\n", tab[3]);
		printf("%d\n", tab[4]);
	}
	return (0);
}
