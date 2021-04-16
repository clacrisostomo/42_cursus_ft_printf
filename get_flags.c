/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 21:27:42 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/15 21:51:29 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_da_dani(t_flags *flags, va_list args)
{
	if (flags->type == '%')
		print_percent(flags);
	else if (flags->type == 'c')
		print_choi(flags, (va_arg(args, int)));
	else if (flags->type == 's')
		print_s(flags, (va_arg(args, char *)));
	else if (flags->type == 'd' || flags->type == 'i')
		print_d_i(flags, (va_arg(args, int)));
	else if (flags->type == 'u')
		print_du_luigi(flags, (va_arg(args, unsigned)));
	else if (flags->type == 'x' || flags->type == 'X')
		print_hex(flags, (va_arg(args, unsigned int)));
	else if (flags->type == 'p')
		print_p(flags, (va_arg(args, unsigned long)));
}

void		get_specs(const char *str, t_flags *flags, va_list args)
{
	if (str[flags->count] == 'c')
		flags->type = 'c';
	else if (str[flags->count] == 'd')
		flags->type = 'd';
	else if (str[flags->count] == 'i')
		flags->type = 'i';
	else if (str[flags->count] == 's')
		flags->type = 's';
	else if (str[flags->count] == 'p')
		flags->type = 'p';
	else if (str[flags->count] == 'u')
		flags->type = 'u';
	else if (str[flags->count] == 'x')
		flags->type = 'x';
	else if (str[flags->count] == 'X')
		flags->type = 'X';
	else if (str[flags->count] == '%')
		flags->type = '%';
	print_da_dani(flags, args);
}

void		get_flags_a(const char *str, t_flags *flags, va_list args)
{
	if (str[flags->count] == '.')
	{
		flags->dot = 1;
		flags->count++;
		if (str[flags->count] == '*')
			paula_is_star(flags, args, &flags->precision);
		else if (is_number(str, flags) == 1)
		{
			flags->precision = flags->number;
			//flags->zero = 0;
			//flags->padding = ' ';
		}
		else
		{
			flags->precision = 0;
			//flags->zero = 0;
			//flags->padding = ' ';
		}
	}
	get_specs(str, flags, args);
}

void		get_flags(const char *str, t_flags *flags, va_list args)
{
	while (str[flags->count] == '0' || str[flags->count] == '-')
	{
		if (str[flags->count] == '0' && flags->minus == 0)
		{
			flags->zero = 1;
			flags->minus = 0;
			flags->padding = '0';
		}
		else if (str[flags->count] == '-')
		{
			flags->zero = 0;
			flags->minus = 1;
			flags->padding = ' ';
		}
		flags->count++;
	}
	if (str[flags->count] == '*')
		paula_is_star(flags, args, &flags->width);
	else if (is_number(str, flags) == 1)
		flags->width = flags->number;
	get_flags_a(str, flags, args);
}
