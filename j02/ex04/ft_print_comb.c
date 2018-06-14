/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:44:57 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/02 20:30:10 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_numeros(char a, char b, char c);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_numeros(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

void	ft_numeros(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
