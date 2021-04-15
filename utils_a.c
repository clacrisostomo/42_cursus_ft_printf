/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:11:12 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/14 21:24:26 by csantos-         ###   ########.fr       */
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

char		*hextoa(t_flags *flags, unsigned long nb)
{
	int				count;
	char			*str;
	unsigned long	temp;

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
		if ((flags->type == 'x' || flags->type == 'p') && temp >= 10)
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

char		*ft_utoa(unsigned int n)
{
	unsigned int	count;
	unsigned int	num;
	char			*temp;

	count = 1;
	num = n;
	while (n >= 10 && count++)
		n /= 10;
	if (!(temp = malloc((count + 1) * sizeof(char))))
		return (NULL);
	*(temp + count) = '\0';
	while (count--)
	{
		*(temp + count) = num % 10 + '0';
		num /= 10;
	}
	return (temp);
}
