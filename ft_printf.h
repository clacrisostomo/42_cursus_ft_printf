/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 00:27:07 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/08 22:52:06 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

/*
**  Struct Part
*/
typedef struct s_flags
{
	char	type;
	char	zero;
	char	minus;
	char	padding;
	char 	dot;
	int		width;
	int		precision;
	int		number;
	int		precision_val;
	int		count;
	int		len;
}				t_flags;

/*
** Prinft functions
*/

int			ft_printf(const char *input, ...);
void		reset_type(t_flags *flags);
void		get_flags(const char *str, t_flags *flags, va_list args);
void		get_flags_a(const char *str, t_flags *flags, va_list args);
void		get_is_star(const char *str, t_flags *flags, va_list args);
int			is_number(const char *str, t_flags *flags);

void		print_percent(t_flags *flags);
void		print_choi(t_flags *flags, int c);
void		print_padd(t_flags *flags);
void		print_s(t_flags *flags, char *s);

/*
**  Utils functions
*/

void		ft_putchar(t_flags *flags, char c);
char		*ft_strdup(const char *s1);
int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
size_t		ft_strlen(const char *s);
void		ft_putstr(t_flags *flags, char *s, size_t size);

#endif
