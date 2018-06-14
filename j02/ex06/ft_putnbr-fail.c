/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:21:43 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/04 14:32:04 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_exception(void)
{
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
	return (0);
}

void	ft_putnbr(int nb)
{
	int i;
	int mod;
	int n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
		ft_exception();
	else
	{
		i = 10;
	if (nb > -10 || nb < 10)
	{
		i = nb;
		ft_putchar(i);
	}
	while ((nb / i) > 10)
		i = i * 10;
	while (i >= 10)
	{
		mod = nb % i;
		n = (nb - mod) / i;
		ft_putchar('0' + n);
		i = i / 10;
		nb = mod;
	}
	ft_putchar('0' + nb);
	}
}

int		main(void)
{
	ft_putnbr(14);
	return (0);
}
