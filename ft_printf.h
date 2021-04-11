/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 00:27:07 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 01:14:51 by csantos-         ###   ########.fr       */
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
# include <limits.h>

/*
**  Struct Part
*/
typedef struct	s_flags
{
	char	type;
	char	zero;
	char	minus;
	char	padding;
	int		width;
	int		precision;
	int		number;
	int		count;
	int		len;
	char	dot;
	char	negative;
}				t_flags;

/*
** Prinft functions
*/

int				ft_printf(const char *input, ...);
void			reset_type(t_flags *flags);
void			get_flags(const char *str, t_flags *flags, va_list args);
void			get_flags_a(const char *str, t_flags *flags, va_list args);
void			paula_is_star(t_flags *flags, va_list args, int *star);
int				is_number(const char *str, t_flags *flags);
void			reset_da_cla(t_flags *flags);

void			print_percent(t_flags *flags);
void			print_choi(t_flags *flags, int c);
void			print_padding(t_flags *flags, int len);
void			print_s(t_flags *flags, char *s);
void			print_doido_da_nat(t_flags *flags, char *number, int size);
void			print_d_i(t_flags *flags, int num);
void			print_du_luigi(t_flags *flags, long int num);
void			print_hex(t_flags *flags, long int num);

/*
**  Utils functions
*/

void			ft_putchar(t_flags *flags, char c);
char			*ft_strdup(const char *s1);
int				ft_isdigit(int c);
void			ft_putstr(t_flags *flags, char *s, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_itoa(long int n);
char			*hextoa(t_flags *flags, long int nb);

#endif
