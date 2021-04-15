/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:37:40 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/14 21:14:34 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Deals with padding for pointers
*/

void			print_doido_ptr(t_flags *flags, char *ptr, int size)
{
	if (flags->width <= 0)
		flags->width = size;
	else if (flags->width > size && flags->minus == 0)
	{
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	ft_putstr(flags, "0x", 2);
	if (flags->dot == 1 && flags->precision > size && flags->width > flags->precision)
	{
		flags->width = flags->width - flags->precision;
		print_padding(flags, flags->width);
	}
	if (flags->dot == 1 && flags->precision > size && flags->width < flags->precision)
	{
		flags->padding = '0';
		print_padding(flags, flags->precision - size + 2);
	}
	ft_putstr(flags, ptr, size - 2);
	if (flags->width > size && flags->minus == 1)
	{
		flags->padding = ' ';
		flags->width = flags->width - size;
		print_padding(flags, flags->width);
	}
	reset_da_cla(flags);
}

/*
** Prints pointers
*/

void			print_p(t_flags *flags, unsigned int pointer)
{
	int				size;
	char			*ptr;

	flags->count++;
	ptr = hextoa(flags, pointer);
	size = (int)ft_strlen(ptr) + 2;
	if ((pointer == 0) && flags->dot == 1)
		size = 2;
	print_doido_ptr(flags, ptr, size);
	free(ptr);
}
