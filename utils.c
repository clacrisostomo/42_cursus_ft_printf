/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:47:05 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/08 21:36:59 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void		ft_putchar(t_flags *flags, char c)
{
	write(1, &c, 1);
	flags->len++;
}

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	str = 0;
	i = 0;
	if (!(str = (char *)malloc(ft_strlen(s1) + 1)))
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int			ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
