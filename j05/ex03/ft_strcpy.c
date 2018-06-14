/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:41:11 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/13 15:43:08 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	chaine[] = "bonjourmonsieur";
	char	copie[] = "tylerdurden";
	char	chaine2[] = "bonjourmonsieur";
	char	copie2[] = "tylerdurden";

	ft_strcpy(copie, chaine);
	printf("%s\n", chaine);
	printf("%s\n", copie);
	printf("\n");
	strcpy(copie2, chaine2);
	printf("%s\n", chaine2);
	printf("%s\n", copie2);
	return (0);
}
