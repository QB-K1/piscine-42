/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 23:02:40 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/19 23:58:12 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

int		main(void)
{
	int		t2;
	int		*t1;
	int		**t;

	t2 = 5;
	t1 = &t2;
	t = &t1;
	ft_ultimate_range(t, 5, 9);
	printf("%d\n", t[0][0]);
	printf("%d\n", t[0][1]);
	printf("%d\n", t[0][2]);
	printf("%d\n", t[0][3]);
	printf("%d\n", t[0][4]);
	return (0);
}
