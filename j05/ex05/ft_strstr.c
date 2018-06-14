/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:40:05 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/18 14:27:54 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*occurence;

	occurence = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			occurence = (str + i);
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (occurence);
				j++;
			}
			occurence = 0;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char	str[] = "le verre est verre de vert";
	char	to_find[] = "jaune";
	char	str2[] = "le verre est verre de vert";
	char	to_find2[] = "jaune";

	printf("moi : %s\n", ft_strstr(str, to_find));
	printf("lui : %s\n", strstr(str2, to_find2));
	return (0);
}
