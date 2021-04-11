/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:11:12 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/10 23:48:59 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putstr(t_flags *flags, char *s, size_t size)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (i < size)
	{
		ft_putchar(flags, s[i]);
		i++;
	}
	return ;
}

static void	conver_putnbr(long int c, char *str, long int i)
{
	long unsigned m;

	m = c;
	if (c < 0)
	{
		str[0] = '-';
		m = (m * (-1));
	}
	if (m >= 10)
		conver_putnbr((m / 10), str, (i - 1));
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
	conver_putnbr(n, str, (count - 1));
	return (str);
}
