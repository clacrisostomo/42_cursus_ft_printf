/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_star.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:11:25 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 19:02:08 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_number(const char *str, t_flags *flags)
{
	flags->number = 0;
	if (!(ft_isdigit((int)str[flags->count])))
		return (0);
	while (ft_isdigit((int)str[flags->count]))
	{
		flags->number = ((flags->number) * 10) + (int)str[flags->count] - '0';
		flags->count++;
	}
	return (1);
}

void	paula_is_star(t_flags *flags, va_list args, int *star)
{
	*star = va_arg(args, int);
	if (*star < 0)
	{
		*star = *star * (-1);
		if (flags->dot == 0)
			flags->minus = 1;
		flags->zero = 0;
		flags->padding = ' ';
	}
	flags->count++;
}

void	print_padding(t_flags *flags, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putchar(flags, flags->padding);
		i++;
	}
}

void	reset_da_cla(t_flags *flags)
{
	if (flags->negative == 1)
	{
		flags->len--;
		flags->negative = 0;
	}
	flags->width = 0;
	flags->precision = -1;
	flags->minus = 0;
	flags->dot = 0;
}
