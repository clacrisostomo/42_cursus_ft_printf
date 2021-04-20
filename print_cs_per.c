/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs_per.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:10:05 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/16 01:09:13 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Prints %
*/

void	print_percent(t_flags *flags)
{
	int	size;

	size = 1;
	flags->count++;
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->dash == 0)
	{
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	ft_putchar(flags, '%');
	if (flags->width > size && flags->dash == 1)
	{
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	reset_flags(flags);
}

/*
** Prints chars
*/

void	print_c(t_flags *flags, int c)
{
	flags->count++;
	if (flags->asterisk == 1)
		flags->dash = 1;
	if (flags->width <= 0)
		flags->width = 1;
	else if (flags->width > 1 && flags->dash == 0)
	{
		flags->padding = ' ';
		print_padding(flags, flags->width - 1);
	}
	ft_putchar(flags, c);
	if (flags->width > 1 && flags->dash == 1)
		print_padding(flags, flags->width - 1);
	reset_flags(flags);
}

/*
** Prints strings
*/

void	print_s(t_flags *flags, char *s)
{
	int	size;

	if (!s)
		s = "(null)";
	size = (int)ft_strlen(s);
	flags->count++;
	if (flags->dot == 1 && flags->precision < size)
		size = flags->precision;
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->dash == 0)
	{
		if (flags->width > flags->precision && flags->zero == 0)
			flags->padding = ' ';
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	ft_putstr(flags, s, size);
	if (flags->width > size && flags->dash == 1)
	{
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	reset_flags(flags);
}
