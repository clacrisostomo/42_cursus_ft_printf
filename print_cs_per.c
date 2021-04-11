/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs_per.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:10:05 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/10 23:47:40 by csantos-         ###   ########.fr       */
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
		print_padd(flags, flags->width - 1);
	}
	ft_putchar(flags, c);
	if (flags->width > 1 && flags->minus == 1)
		print_padd(flags, flags->width - 1);
}

void		print_s(t_flags *flags, char *s)
{
	int size;

	size = (int)ft_strlen(s);
	flags->count++; // CHOI MANDOU A GENTE CONTAR SEMPRE ESSA MERDA
	if (flags->dot == 1 && flags->precision < size)
		size = flags->precision;
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->minus == 0)
	{
		flags->padding = ' ';
		flags->width = flags->width - size;
		print_padd(flags, flags->width);
	}
	ft_putstr(flags, s, size);
	if (flags->width > size && flags->minus == 1)
	{
		flags->width = flags->width - size;
		print_padd(flags, flags->width);
	}
	reset_da_cla(flags);
}
