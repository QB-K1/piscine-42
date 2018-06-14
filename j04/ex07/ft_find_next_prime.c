/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 22:25:13 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 20:25:38 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (nb++)
	{
		if (ft_is_prime(nb))
			return (nb);
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(2147483643));
	return (0);
}
