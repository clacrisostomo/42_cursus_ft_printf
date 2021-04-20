/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:52:18 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/16 02:10:30 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Prints decimal and int
*/

static void	verify_d_i(t_flags *flags, char *number, int size)
{
	if (flags->negative == 1)
	{
		size = size + 1;
		flags->precision = flags->precision + 1;
	}
	if (flags->negative == 1 && flags->zero == 1)
	{
		ft_putchar(flags, '-');
		print_negative(flags, number, size);
	}
	else if (flags->negative == 1 && flags->zero == 0)
		print_negative(flags, number, size);
	else
		print_positive(flags, number, size);
	free(number);
}

void	print_d_i(t_flags *flags, long int num)
{
	int		size;
	char	*number;

	flags->count++;
	if (flags->dot == 1)
	{
		flags->zero = 0;
		flags->padding = ' ';
	}
	if (num == INT_MIN)
	{
		num = 2147483648;
		flags->negative = 1;
	}
	if (num < 0)
	{
		flags->negative = 1;
		num = num * (-1);
	}
	number = ft_itoa(num);
	size = (int)ft_strlen(number);
	if (num == 0 && flags->dot == 1)
		size = 0;
	verify_d_i(flags, number, size);
}

/*
** Deals with precision for d and i
*/

static void	precision_negative(t_flags *flags, int size)
{
	ft_putchar(flags, '-');
	if (flags->dot == 1 && flags->precision > size)
	{
		flags->padding = '0';
		print_padding(flags, flags->precision - size);
	}
}

void	print_negative(t_flags *flags, char *number, int size)
{
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->dash == 0)
	{
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	if (flags->zero == 0)
		precision_negative(flags, size);
	ft_putstr(flags, number, size - 1);
	if (flags->width > size && flags->dash == 1)
	{
		flags->padding = ' ';
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	reset_flags(flags);
}
