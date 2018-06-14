/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 12:00:05 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 17:28:47 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int		main(void)
{
	int		try;

	try = ft_iterative_factorial(2147483647);
	printf("%d\n", try);
	return (0);
}
