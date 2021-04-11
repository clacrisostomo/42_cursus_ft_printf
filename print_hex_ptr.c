/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:51:20 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/10 23:51:22 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			print_hex(t_flags *flags, long int num)
{
	int				size;
	char			*number;

	flags->count++; // CHOI MANDOU A GENTE CONTAR SEMPRE ESSA MERDA
	if (num < 0)
	{
		num = num * (-1);
		num = UINT_MAX - num + 1;
	}
	number = hextoa(num);
	size = (int)ft_strlen(number);
	print_doido_da_nat(flags, number, size);
}
