/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 15:48:33 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/17 20:25:15 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ascii_order(char *str[], int nb)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < (nb - 1))
	{
		j = 0;
		while (str[i][j] == str[i + 1][j])
			j++;
		if (str[i][j] > str[i + 1][j])
		{
			tmp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

void	ft_print_params(char *str[], int nb)
{
	int		i;
	int		a;

	if (nb > 1)
	{
		i = 1;
		while (i < nb)
		{
			a = 0;
			while (str[i][a] != '\0')
			{
				ft_putchar(str[i][a]);
				a++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	ft_ascii_order(argv, argc);
	ft_print_params(argv, argc);
	return (0);
}
