/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_star.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:11:25 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/08 22:56:18 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

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

void	get_is_star(const char *str, t_flags *flags, va_list args)
{
	flags->precision_val = va_arg(args, int);
	if (str[flags->count - 1] == '.' && flags->dot == 1)
	{
		if (flags->precision_val >= 0)
		{
			flags->precision = flags->precision_val;
			flags->zero = 0;
			flags->padding = ' ';
		}
	}
	if (flags->precision_val < 0)
	{
		flags->width = (flags->precision_val * (-1));
		flags->zero = 0;
		flags->padding = ' ';
	}
	else
		flags->width = flags->precision_val;
	flags->count++;
}
