/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 01:11:23 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/21 00:34:06 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**memory_tab(char **tab, char *str)
{
	int		i;
	int		nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
		{
			nb_words++;
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
		}
	}
	if (!(str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'))
		nb_words++;
	tab = (char**)malloc(sizeof(*tab) * (nb_words + 1));
	if ((tab = (char**)malloc(sizeof(*tab) * (nb_words + 1))) == NULL)
		return (NULL);
	tab[nb_words] = 0x0;
	return (tab);
}

char	**memory_words(char **tab, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
		{
			tab[j] = (char*)malloc(sizeof(**tab) * (k + 1));
			if ((tab[j] = (char*)malloc(sizeof(**tab) * (k + 1))) == NULL)
				return (NULL);
			j++;
			k = 0;
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
		}
		k++;
	}
	return (tab);
}

char	**tab_crea(char **tab, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		tab[j][k] = str[i];
		i++;
		k++;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
		}
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = NULL;
	tab = memory_tab(tab, str);
	tab = memory_words(tab, str);
	tab = tab_crea(tab, str);
	return (tab);
}

int		main(void)
{
	char	*a = "oqHMTea5BlO               l3MRvBGtPWD             NT0U2Lh6";
	char	**tab = ft_split_whitespaces(a);

	printf("%s\n", a);
	while (*tab)
		printf("%s/", *tab++);
	return (0);
}
