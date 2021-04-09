/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:11:12 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/08 22:59:18 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int			ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
		c = c - 32;
	return (c);
}

int			ft_tolower(int c)
{
	if (c >= 'A' || c <= 'Z')
		c = c + 32;
	return (c);
}

void		ft_putstr(t_flags *flags, char *s, size_t size)

{
	size_t i;

	i = 0;
	if (!s)
		return ;
	/*printf("%i\n", (int)size);*/
	while (i <= size)
	{
		ft_putchar(flags, s[i]);
		i++;
	}
	return ;
}
