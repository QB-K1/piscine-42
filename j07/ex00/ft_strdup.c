/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 21:47:52 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/19 18:14:34 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_strlen(char *str)
{
	int		nb;

	nb = 0;
	while (str[nb] != '\0')
		nb++;
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (src_len + 1));
	if ((str = (char*)malloc(sizeof(*str) * (src_len + 1))) == NULL)
		return (NULL);
	while (i < src_len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char	*test = "Hello JACK 8745 #& ! /5";
	char	*result;

	result = ft_strdup(test);
	printf("test : %s\n", test);
	printf("result : %s\n", result);
	return (0);
}
