/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:50:18 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/10 23:50:38 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*hexxtoa(long int nb)
{
	int			count;
	char		*str;
	long int	temp;

	temp = nb;
	count = 0;
	while ((temp = temp / 16) > 0)
		count++;
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	str[count] = '\0';
	while (count >= 0)
	{
		temp = nb % 16;
		if (temp >= 10)
			str[count] = temp + 55;
		else
			str[count] = temp + 48;
		nb = nb / 16;
		count--;
	}
	return (str);
}

char		*hextoa(long int nb)
{
	int			count;
	char		*str;
	long int	temp;

	temp = nb;
	count = 0;
	while ((temp = temp / 16) > 0)
		count++;
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	str[count] = '\0';
	while (count >= 0)
	{
		temp = nb % 16;
		if (temp >= 10)
			str[count] = temp + 87;
		else
			str[count] = temp + 48;
		nb = nb / 16;
		count--;
	}
	return (str);
}
