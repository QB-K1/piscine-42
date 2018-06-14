/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:32:52 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/16 19:06:55 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
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
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char	dest[13] = "bonjour ";
	char	src[5] = "Jack";
	char	dest2[13] = "bonjour ";
	char	src2[5] = "Jack";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src2));
	return (0);
}
