/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:11:12 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 04:10:25 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_putnbr(long int c, char *str, long int i)
{
	long unsigned m;

	m = c;
	if (c < 0)
	{
		str[0] = '-';
		m = (m * (-1));
	}
	if (m >= 10)
		convert_putnbr((m / 10), str, (i - 1));
	str[i] = (m % 10) + '0';
}

char		*ft_itoa(long int n)
{
	char		*str;
	long int	j;
	long int	count;

	j = n;
	count = 0;
	if (j <= 0)
		count++;
	while (j)
	{
		j = (j / 10);
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = 0;
	convert_putnbr(n, str, (count - 1));
	return (str);
}

/*
** Converts input into hexadecimal x and X
*/

char		*hextoa(t_flags *flags, long int nb)
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
		if (flags->type == 'x' && temp >= 10)
			str[count] = temp + 87;
		else if (flags->type == 'X' && temp >= 10)
			str[count] = temp + 55;
		else
			str[count] = temp + 48;
		nb = nb / 16;
		count--;
	}
	return (str);
}
