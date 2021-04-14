/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 19:23:36 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/13 21:48:21 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			reset_type(t_flags *flags)
{
	flags->type = 0;
	flags->zero = 0;
	flags->minus = 0;
	flags->padding = ' ';
	flags->width = 0;
	flags->precision = -1;
	flags->number = 0;
	flags->count = 0;
	flags->len = 0;
	flags->dot = 0;
	flags->negative = 0;
	flags->asterisk = 0;
}

int				ft_printf(const char *input, ...)
{
	const char	*str;
	t_flags		flags;
	va_list		args;

	va_start(args, input);
	reset_type(&flags);
	if (!(str = ft_strdup(input)))
		return (0);
	while (str[flags.count])
	{
		if (str[flags.count] == '%')
		{
			flags.count++;
			get_flags(str, &flags, args);
		}
		else
		{
			ft_putchar(&flags, str[flags.count]);
			flags.count++;
		}
	}
	free((char *)str);
	va_end(args);
	return (flags.len);
}
