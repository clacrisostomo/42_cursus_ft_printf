/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 00:27:07 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/16 02:07:38 by csantos-         ###   ########.fr       */
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
	char	dash;
	char	padding;
	int		width;
	int		precision;
	int		number;
	int		count;
	int		len;
	char	dot;
	char	negative;
	char	asterisk;
}				t_flags;

/*
** Printf functions
*/

int				ft_printf(const char *input, ...);
void			set_flags(t_flags *flags);
void			get_flags(const char *str, t_flags *flags, va_list args);
void			get_flags_a(const char *str, t_flags *flags, va_list args);
void			check_star(t_flags *flags, va_list args, int *star);
int				is_number(const char *str, t_flags *flags);
void			get_specs(const char *str, t_flags *flags, va_list args);
void			print_specs(t_flags *flags, va_list args);
void			print_percent(t_flags *flags);
void			print_c(t_flags *flags, int c);
void			print_s(t_flags *flags, char *s);
void			print_d_i(t_flags *flags, long int num);
void			print_u(t_flags *flags, unsigned num);
void			print_hex(t_flags *flags, unsigned int num);
void			print_p(t_flags *flags, unsigned long pointer);
void			print_padding(t_flags *flags, int len);
void			print_positive(t_flags *flags, char *number, int size);
void			print_negative(t_flags *flags, char *number, int size);
void			print_pointer(t_flags *flags, char *ptr, int size);
void			reset_flags(t_flags *flags);

/*
**  Utils functions
*/

char			*ft_strdup(const char *s1);
void			ft_putchar(t_flags *flags, char c);
int				ft_isdigit(int c);
void			ft_putstr(t_flags *flags, char *s, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_itoa(long int n);
char			*hextoa(t_flags *flags, unsigned long long nb);
char			*utoa(unsigned int n);

#endif
