/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 15:06:31 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 17:33:24 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int		a;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	a = nb * ft_recursive_power(nb, power - 1);
	return (a);
}

int		main(void)
{
	int		try;

	try = ft_recursive_power(2147483647, 8);
	printf("%d\n", try);
	return (0);
}
