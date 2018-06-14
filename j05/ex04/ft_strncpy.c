/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:22:13 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/18 19:33:38 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while ((dest[i] != '\0') && (i < n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	unsigned int	n = 4;
	char			src[] = "bonjour";
	char			dest[] = "tylerdurden";
	unsigned int	n1 = 4;
	char			src1[] = "bonjour";
	char			dest1[] = "tylerdurden";

	printf("moi : %s\n", ft_strncpy(dest, src, n));
	printf("lui : %s\n", strncpy(dest1, src1, n1));
	return (0);
}
