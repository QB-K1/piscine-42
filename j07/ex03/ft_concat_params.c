/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 00:02:20 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/20 18:31:52 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_all(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = j + ft_strlen(argv[i]);
		i++;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		all;
	int		i;
	int		j;
	int		k;

	all = ft_strlen_all(argc, argv) + argc;
	str = (char*)malloc(sizeof(*str) * all);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	char	*t;

	t = ft_concat_params(argc, argv);
	printf("%s\n", t);
	return (0);
}
