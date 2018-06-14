/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 13:23:37 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/06 10:21:21 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_commspace(char a, char b, char c, char d)
{
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_result(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_block2(char a, char b)
{
	char c;
	char d;

	if (b == '9')
	{
		c = a + 1;
		d = '0';
	}
	else
	{
		c = a;
		d = b + 1;
	}
	while (c <= '9')
	{
		if (d > '9')
			d = '0';
		while (d <= '9')
		{
			ft_result(a, b, c, d);
			ft_commspace(a, b, c, d);
			d = d + 1;
		}
		c = c + 1;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_block2(a, b);
			b = b + 1;
		}
		a = a + 1;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
