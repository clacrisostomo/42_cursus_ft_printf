/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_d_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:52:18 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 00:41:11 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Prints unsigned int
*/
void			print_du_luigi(t_flags *flags, long int num)
{
	int				size;
	char			*number;

	flags->count++; // CHOI COMMANDS US TO ALWAYS COUNT THIS SHIT
	if (num < 0)
	{
		num = num * (-1);
		num = UINT_MAX - num + 1;
	}
	number = ft_itoa(num);
	size = (int)ft_strlen(number);
	print_doido_da_nat(flags, number, size);
}

/*
** Prints decimal and int
*/
void			print_d_i(t_flags *flags, int num)
{
	int		size;
	char	*number;

	flags->count++; // CHOI COMMANDS US TO ALWAYS COUNT THIS SHIT
	if (num < 0)
	{
		flags->negative = 1;
		num = num * (-1);
	}
	number = ft_itoa(num);
	size = (int)ft_strlen(number);
	if (flags->negative == 1)
	{
		size = size + 1;
		flags->precision = flags->precision + 1;
	}
	if (flags->negative == 1 && flags->zero == 1)
		ft_putchar(flags, '-');
	print_doido_da_nat(flags, number, size);
}

/*
** Deals with precision for u, d and i
*/
static void		precision_da_nat(t_flags *flags, int size)
{
	ft_putchar(flags, '-');
	if (flags->dot == 1 && flags->precision > size)
	{
		flags->padding = '0';
		print_padd(flags, flags->precision - size);
	}
}

void			print_doido_da_nat(t_flags *flags, char *number, int size)
{
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->minus == 0)
	{
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padd(flags, flags->width);
	}
	if (flags->negative == 1 && flags->zero == 0)
		precision_da_nat(flags, size);
	ft_putstr(flags, number, size);
	if (flags->width > size && flags->minus == 1)
	{
		flags->padding = ' ';
		if (flags->precision > size)
			flags->width = flags->width - flags->precision;
		else
			flags->width = flags->width - size;
		print_padd(flags, flags->width);
	}
	reset_da_cla(flags);
}
