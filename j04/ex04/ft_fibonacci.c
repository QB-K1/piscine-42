/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 16:06:59 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/12 18:12:54 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index)
{
	int		a;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (a);
}

int		main(void)
{
	printf("%d\n", ft_fibonacci(25));
	return (0);
}
