/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs_per.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:10:05 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/08 23:46:53 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_percent(t_flags *flags)
{
	flags->count++; // CHOI MANDOU A GENTE CONTAR SEMPRE ESSA MERDA
	ft_putchar(flags, '%');
}

void		print_choi(t_flags *flags, int c)
{
	flags->count++; // CHOI MANDOU A GENTE CONTAR SEMPRE ESSA MERDA
	if (flags->width <= 0)
		flags->width = 1;
	else if (flags->width > 1 && flags->minus == 0)
	{
		flags->padding = ' ';
		print_padd(flags);
	}
	ft_putchar(flags, c);
	if (flags->width > 1 && flags->minus == 1)
		print_padd(flags);
}

void		print_s(t_flags *flags, char *s)
{
	int size;

	size = ft_strlen(s);
	//printf("%i\n", size);
	flags->count++; // CHOI MANDOU A GENTE CONTAR SEMPRE ESSA MERDA
	if (flags->dot == 1 && flags->precision < size)
		size = flags->precision - 1;
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->minus == 0)
	{
		flags->padding = ' ';
		flags->width = flags->width - size + 1;
		print_padd(flags);
	}
	ft_putstr(flags, s, size);
	if (flags->width > size && flags->minus == 1)
	{
		flags->width = flags->width - size + 1;
		print_padd(flags);
	}
	flags->width = 0;
	flags->precision = -1;
	flags->minus = 0;
}

void		print_padd(t_flags *flags)
{
	int	i;

	i = 0;
	while (i < (flags->width - 1))
	{
		ft_putchar(flags, flags->padding);
		i++;
	}
}
