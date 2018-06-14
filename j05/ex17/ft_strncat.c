/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:32:52 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 19:36:42 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while ((i < nb) && (src[i] != '\0'))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char	dest[19] = "bonjour ";
	char	src[10] = "Johnnyboy";
	int		nb = 5;
	char	dest2[19] = "bonjour ";
	char	src2[10] = "Johnnyboy";
	int		nb2 = 5;

	printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest2, src2, nb2));
	return (0);
}
