/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:21:43 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/06 16:25:50 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == (-2147483648))
		{
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
