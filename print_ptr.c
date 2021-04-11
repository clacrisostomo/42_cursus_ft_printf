/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:37:40 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 04:12:33 by csantos-         ###   ########.fr       */
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
	ft_putstr(flags, ptr, size);
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

void			print_p(t_flags *flags, long int pointer)
{
	int				size;
	char			*ptr;

	flags->count++; // CHOI COMMANDS US TO ALWAYS COUNT THIS SHIT
	/*if (*pointer < 0)
	{
		*pointer = *pointer * (-1);
		*pointer = UINT_MAX - *pointer + 1;
	}*/
	ptr = hextoa(flags, pointer);
	size = (int)ft_strlen(ptr);
	print_doido_da_cla(flags, ptr, size);
}
