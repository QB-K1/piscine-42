/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:24:47 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/17 14:40:58 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		a;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			a = 0;
			while (argv[i][a] != '\0')
			{
				ft_putchar(argv[i][a]);
				a++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
