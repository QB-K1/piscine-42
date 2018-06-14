/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbuisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 17:49:05 by qbuisson          #+#    #+#             */
/*   Updated: 2017/09/07 18:49:14 by qbuisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hr1;
	int		hr2;
	int		ampm1;
	int		ampm2;

	hr1 = hour;
	hr2 = ((hour + 1) == 24 ? 0 : (hour + 1));
	ampm1 = 0;
	ampm2 = 0;
	if (hr1 >= 12)
	{
		hr1 = hr1 - 12;
		ampm1 = 1;
	}
	if (hr2 >= 12)
	{
		hr2 = hr2 - 12;
		ampm2 = 1;
	}
	hr1 = (hr1 == 0 ? 12 : hr1);
	hr2 = (hr2 == 0 ? 12 : hr2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s. AND %d.00 %s.\n", hr1,
	(ampm1 == 0 ? "A.M" : "P.M"), hr2, (ampm2 == 0 ? "A.M" : "P.M"));
}

int		main(void)
{
	int hour = 12;

	ft_takes_place(hour);
	return (0);
}
