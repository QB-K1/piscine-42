/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:12:57 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 17:32:30 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		tmp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	i = 1;
	tmp = nb;
	while (i < power)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}

int		main(void)
{
	int		try;

	try = ft_iterative_power(2147483647, 8);
	printf("%d\n", try);
	return (0);
}
