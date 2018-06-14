/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 22:55:46 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/09 13:46:55 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int		i;
	int		b;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		b = 0;
		while (b < 42)
		{
			c = str[i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if (str[i] == 'z')
					str[i] = 'a';
				else if (str[i] == 'Z')
					str[i] = 'A';
				else
					str[i]++;
			}
			b++;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char t[17] = "ViVe les G33ks !";

	printf("%s", ft_rot42(t));
	return (0);
}
