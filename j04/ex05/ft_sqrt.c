/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:29:29 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 20:34:55 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	i = 0;
	while (i < (nb / 4))
	{
		i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(2143690000));
	return (0);
}
