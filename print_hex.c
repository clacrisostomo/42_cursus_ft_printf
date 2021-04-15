/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:51:20 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/15 00:38:43 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Deals with precision for u and hexadecimals
*/

static void		precision_da_cla(t_flags *flags, char *number, int size)
{
	if (flags->dot == 1 && flags->precision > size)
	{
		flags->padding = '0';
		print_padding(flags, flags->precision - size);
	}
	if (flags->dot == 1 && flags->precision <= 0 && *number == '0')
		print_conferir_d_i(flags, size);
}

void			print_doido_da_cla(t_flags *flags, char *number, int size)
{
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->minus == 0)
	{
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	precision_da_cla(flags, number, size);
	ft_putstr(flags, number, size);
	if (flags->width > size && flags->minus == 1)
	{
		flags->padding = ' ';
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	reset_da_cla(flags);
}

/*
** Prints hexadecimals x and X
*/

void			print_hex(t_flags *flags, unsigned int num)
{
	int				size;
	char			*number;

	flags->count++;
	if (flags->dot == 1)
	{
		flags->zero = 0;
		flags->padding = ' ';
	}
	/*if (num < 0)
	{
		num = num * (-1);
		num = UINT_MAX - num + 1;
	}*/
	number = hextoa(flags, (unsigned long long)num);
	size = (int)ft_strlen(number);
	if (num == 0 && flags->dot == 1)
		size = 0;
	print_doido_da_cla(flags, number, size);
	free(number);
}
