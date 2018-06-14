/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 14:07:00 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/02 11:49:05 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
