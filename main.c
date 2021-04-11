/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:48:58 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/10 23:45:31 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	/*char a;

	a = 'b';
	printf("hello1\n");
	ft_printf("hello2\n");

	printf("|%-*c|", 3, a);
	printf("\n");
	ft_printf("|%-*c|", 3, a);
	printf("\n");
	printf("%-60s: |%s|","format identifier", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%s|","FT format identifier", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%20s|", "with minimum field (20) width", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%20s|", "FT with minimum field (20) width", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%-20s|", "FT minimum field (20) left align", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%.8s|", "precision (8) field", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%.8s|", "FT precision (8) field", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%-.8s|", "precision (8) field left align", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%-.8s|", "FT precision (8) field left align", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%20.8s|", "minimum (20) and precision (8) field", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%20.8s|", "FT minimum (20) and precision (8) field", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%-20.8s|", "minimum (20) and precision (8) field left align", "quarenta-e-dois");
	printf("\n");
	ft_printf("%-60s: |%-20.8s|", "FT minimum (20) and precision (8) field left align", "quarenta-e-dois");
	printf("\n");
	printf("%-60s: |%-*.*s|", "star minimum (20) and precision (8) field left align", 20, 8, "quarenta e dois");
	printf("\n");
	ft_printf("%-60s: |%-*.*s|", "FT star minimum (20) and precision (8) field left align", 20, 8, "quarenta e dois");
	printf("\n");

	printf("%-60s: |%d|","format identifier", -42);
	printf("\n");
	ft_printf("%-60s: |%d|","FT format identifier", -42);
	printf("\n");
	printf("%-60s: |%20d|", "with minimum field (20) width", -42);
	printf("\n");
	ft_printf("%-60s: |%20d|", "FT with minimum field (20) width", -42);
	printf("\n");
	printf("%-60s: |%020d|", "minimum field (20) width with 0's", -42);
	printf("\n");
	ft_printf("%-60s: |%020d|", "FT minimum field (20) width with 0's", -42);
	printf("\n");
	printf("%-60s: |%-20d|", "minimum field (20) left align", -42);
	printf("\n");
	ft_printf("%-60s: |%-20d|", "FT minimum field (20) left align", -42);
	printf("\n");
	printf("%-60s: |%20.1d|", "precision (1) and minimum (20) field", -42);
	printf("\n");
	ft_printf("%-60s: |%20.1d|", "FT precision (1) and minimum (20) field", -42);
	printf("\n");
	printf("%-60s: |%.1d|", "precision (1) field", -42);
	printf("\n");
	ft_printf("%-60s: |%.1d|", "FT precision (1) field", -42);
	printf("\n");
	printf("%-60s: |%20.10d|", "minimum (20) and precision (10) field", -12345678);
	printf("\n");
	ft_printf("%-60s: |%020.10d|", "FT minimum (20) and precision (10) field", -12345678);
	printf("\n");
	printf("%-60s: |%-20.10d|", "minimum (20) and precision (10) field left align", -12345678);
	printf("\n");
	ft_printf("%-60s: |%-20.10d|", "minimum (20) and precision (10) field left align", -12345678);
	printf("\n");

	printf("%-60s: |%-*.*d|", "STAR minimum (20) and precision (1) field left align", 20, 1, -12345678);
	printf("\n");
	ft_printf("%-60s: |%-*.*d|", "FT STAR minimum (20) and precision (1) field left align", 20, 1, -12345678);
	printf("\n");
	printf("%-60s: |%-.1d|", "precision (1) field left align", -12345678);
	printf("\n");
	ft_printf("%-60s: |%-.1d|", "FT precision (1) field left align", -12345678);
	printf("\n");
	printf("%-60s: |%u|","negative input", -42);
	printf("\n");
	ft_printf("%-60s: |%u|","FT negative input", -42);
	printf("\n");
	printf("%-60s: |%u|","format identifier", 42);
	printf("\n");
	ft_printf("%-60s: |%u|","FT format identifier", 42);
	printf("\n");
	printf("%-60s: |%20u|", "with minimum field (20) width", 42);
	printf("\n");
	ft_printf("%-60s: |%20u|", "FT with minimum field (20) width", 42);
	printf("\n");
	printf("%-60s: |%020u|", "minimum field (20) width with 0's", 42);
	printf("\n");
	ft_printf("%-60s: |%020u|", "FT minimum field (20) width with 0's", 42);
	printf("\n");
	printf("%-60s: |%-20u|", "minimum field (20) left align", 42);
	printf("\n");
	ft_printf("%-60s: |%-20u|", "FT minimum field (20) left align", 42);
	printf("\n");
	printf("%-60s: |%20.1u|", "precision (1) and minimum (20) field", 42);
	printf("\n");
	ft_printf("%-60s: |%20.1u|", "FT precision (1) and minimum (20) field", 42);
	printf("\n");
	printf("%-60s: |%.1u|", "precision (1) field", 42);
	printf("\n");
	ft_printf("%-60s: |%.1u|", "FT precision (1) field", 42);
	printf("\n");
	printf("%-60s: |%-.1u|", "precision (1) field left align", 42);
	printf("\n");
	ft_printf("%-60s: |%-.1u|", "FT precision (1) field left align", 42);
	printf("\n");
	printf("%-60s: |%-20.1u|", "minimum (20) and precision (1) field left align", 42);
	printf("\n");
	ft_printf("%-60s: |%-20.1u|", "FT minimum (20) and precision (1) field left align", 42);
	printf("\n");
	printf("%-60s: |%-*.*u|", "minimum (20) and precision (1) field left align", 20, 1, 42);
	printf("\n");
	ft_printf("%-60s: |%-*.*u|", "FT minimum (20) and precision (1) field left align", 20, 1, 42);
	printf("\n");*/
	int hex = 0x9f4;
	int integer = 42;

	printf("\n");
	printf("%-60s: |%x|","(int) format identifier", integer);
	printf("\n");
	ft_printf("%-60s: |%x|","FT (int) format identifier", integer);
	printf("\n");
	printf("%-60s: |%x|","(hex) format identifier", hex);
	printf("\n");
	ft_printf("%-60s: |%x|","FT (hex) format identifier", hex);
	printf("\n");
	printf("%-60s: |%20x|", "(int) with minimum field (20) width", integer);
	printf("\n");
	ft_printf("%-60s: |%20x|", "FT (int) with minimum field (20) width", integer);
	printf("\n");
	printf("%-60s: |%20x|", "(hex) with minimum field (20) width", hex);
	printf("\n");
	ft_printf("%-60s: |%20x|", "FT (hex) with minimum field (20) width", hex);
	printf("\n");
	/*printf("%-60s: |%020x|", "(int) minimum field (20) width with 0's", integer);
	printf("\n");
	ft_printf("%-60s: |%020x|", "FT (int) minimum field (20) width with 0's", integer);
	printf("\n");
	printf("%-60s: |%020x|", "(hex) minimum field (20) width with 0's", hex);
	printf("\n");
	ft_printf("%-60s: |%020x|", "FT (hex) minimum field (20) width with 0's", hex);
	printf("\n");
	printf("%-60s: |%-20x|", "(int) minimum field (20) left align", integer);
	printf("\n");
	ft_printf("%-60s: |%-20x|", "FT (int) minimum field (20) left align", integer);
	printf("\n");
	printf("%-60s: |%-20x|", "(hex) minimum field (20) left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-20x|", "FT (hex) minimum field (20) left align", hex);
	printf("\n");
	printf("%-60s: |%20.6x|", "precision (6) and minimum (20) field", hex);
	printf("\n");
	ft_printf("%-60s: |%20.6x|", "FT precision (6) and minimum (20) field", hex);
	printf("\n");
	printf("%-60s: |%.6x|", "precision (6) field", integer);
	printf("\n");
	ft_printf("%-60s: |%.6x|", "FT precision (6) field", integer);
	printf("\n");
	printf("%-60s: |%-.6x|", "(hex_neg) precision (6) field left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-.6x|", "FT (hex_neg) precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-20.6x|", "minimum (20) and precision (6) field left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-20.6x|", "FT minimum (20) and precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-*.*x|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n");
	ft_printf("%-60s: |%-*.*x|", "FT hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n");*/
}
