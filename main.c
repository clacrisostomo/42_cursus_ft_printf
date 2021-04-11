/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:48:58 by csantos-          #+#    #+#             */
/*   Updated: 2021/04/11 04:11:23 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	/*char a;

	a = 'b';
	printf("--No flags--\n");
	printf("hello\n");
	ft_printf("hello\n\n");
	printf("--character--\n");
	printf("|%-*c|", 3, a);
	printf("\n");
	ft_printf("|%-*c|", 3, a);
	printf("\n\n");
	printf("--string--\n");
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
	printf("--decimal integer--\n");
	int hex_neg = -0x2a;

	printf("%-60s: |%d|","format identifier", -42);
	printf("\n");
	ft_printf("%-60s: |%d|","FT format identifier", -42);
	printf("\n");
	printf("%-60s: |%d|","(hex) format identifier", hex_neg);
	printf("\n");
	ft_printf("%-60s: |%d|","FT (hex) format identifier", hex_neg);
	printf("\n");
	printf("%-60s: |%-3d|", "with minimum field (3) width", -42);
	printf("\n");
	ft_printf("%-60s: |%-3d|", "FT with minimum field (3) width", -42);
	printf("\n");
	printf("%-60s: |%5d|", "with minimum field (5) width", -42);
	printf("\n");
	ft_printf("%-60s: |%5d|", "FT with minimum field (5) width", -42);
	printf("\n");
	printf("%-60s: |%05d|", "with minimum field (5) width and 0 padding", -42);
	printf("\n");
	ft_printf("%-60s: |%05d|", "FT with minimum field (5) width and 0 padding", -42);
	printf("\n");
	printf("%-60s: |%5.3d|", "minimum field (5) width with 0's", -42);
	printf("\n");
	ft_printf("%-60s: |%5.3d|", "FT minimum field (5) width with 0's", -42);
	printf("\n");
	printf("%-60s: |%-5d|", "minimum field (5) left align", -42);
	printf("\n");
	ft_printf("%-60s: |%-5d|", "FT minimum field (5) left align", -42);
	printf("\n");
	printf("%-60s: |%5.1d|", "precision (1) and minimum (5) field", -42);
	printf("\n");
	ft_printf("%-60s: |%5.1d|", "FT precision (1) and minimum (5) field", -42);
	printf("\n");
	printf("%-60s: |%.3d|", "precision (3) field", hex_neg);
	printf("\n");
	ft_printf("%-60s: |%.3d|", "FT precision (3) field", hex_neg);
	printf("\n");
	printf("%-60s: |%-.5d|", "precision (5) field left align", hex_neg);
	printf("\n");
	ft_printf("%-60s: |%-.5d|", "FT precision (5) field left align", hex_neg);
	printf("\n");
	printf("%-60s: |%10.5d|", "minimum (10) and precision (5) field", -42);
	printf("\n");
	ft_printf("%-60s: |%10.5d|", "FT minimum (10) and precision (5) field", -42);
	printf("\n");
	printf("%-60s: |%-10.5d|", "minimum (10) and precision (5) field left align", -42);
	printf("\n");
	ft_printf("%-60s: |%-10.5d|", "FT minimum (10) and precision (5) field left align", -42);
	printf("\n");
	printf("%-60s: |%-*.*d|", "minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n");
	ft_printf("%-60s: |%-*.*d|", "FT minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n\n");
	printf("--integer--\n");
	printf("\n");
	printf("%-60s: |%i|","format identifier", -42);
	printf("\n");
	ft_printf("%-60s: |%i|","FT format identifier", -42);
	printf("\n");
	printf("%-60s: |%20i|", "with minimum field (20) width", -42);
	printf("\n");
	ft_printf("%-60s: |%20i|", "FT with minimum field (20) width", -42);
	printf("\n");
	printf("%-60s: |%020i|", "minimum field (20) width with 0's", -42);
	printf("\n");
	ft_printf("%-60s: |%020i|", "FT minimum field (20) width with 0's", -42);
	printf("\n");
	printf("%-60s: |%-20i|", "minimum field (20) left align", -42);
	printf("\n");
	ft_printf("%-60s: |%-20i|", "FT minimum field (20) left align", -42);
	printf("\n");
	ft_printf("%-60s: |%20.1i|", "precision (1) and minimum (20) field", -42);
	printf("\n");
	ft_printf("%-60s: |%20.1i|", "FT precision (1) and minimum (20) field", -42);
	printf("\n");
	printf("%-60s: |%.1i|", "precision (1) field", -42);
	printf("\n");
	ft_printf("%-60s: |%.1i|", "FT precision (1) field", -42);
	printf("\n");
	printf("%-60s: |%-.1i|", "(hex_neg) precision (1) field left align", hex_neg);
	printf("\n");
	ft_printf("%-60s: |%-.1i|", "FT (hex_neg) precision (1) field left align", hex_neg);
	printf("\n");
	printf("%-60s: |%20.10i|", "minimum (20) and precision (10) field", -12345678);
	printf("\n");
	ft_printf("%-60s: |%020.10i|", "FT minimum (20) and precision (10) field", -12345678);
	printf("\n");
	printf("%-60s: |%-20.10i|", "minimum (20) and precision (10) field left align", -12345678);
	printf("\n");
	ft_printf("%-60s: |%-20.10i|", "FT minimum (20) and precision (10) field left align", -12345678);
	printf("\n");
	printf("%-60s: |%-*.*i|", "(hex_neg) minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n");
	ft_printf("%-60s: |%-*.*i|", "FT (hex_neg) minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n\n");
	printf("--unsigned integer--\n");
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
	printf("\n\n");
	printf("--lowercase hexadecimal--\n");
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
	printf("%-60s: |%020x|", "(int) minimum field (20) width with 0's", integer);
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
	printf("\n\n");
	printf("\n");
	printf("--uppercase hexadecimal--\n");
	printf("%-60s: |%X|","(int) format identifier", integer);
	printf("\n");
	ft_printf("%-60s: |%X|","FT (int) format identifier", integer);
	printf("\n");
	printf("%-60s: |%X|","(hex) format identifier", hex);
	printf("\n");
	ft_printf("%-60s: |%X|","FT (hex) format identifier", hex);
	printf("\n");
	printf("%-60s: |%20X|", "(int) with minimum field (20) width", integer);
	printf("\n");
	ft_printf("%-60s: |%20X|", "FT (int) with minimum field (20) width", integer);
	printf("\n");
	printf("%-60s: |%20X|", "(hex) with minimum field (20) width", hex);
	printf("\n");
	ft_printf("%-60s: |%20X|", "FT (hex) with minimum field (20) width", hex);
	printf("\n");
	printf("%-60s: |%020X|", "(int) minimum field (20) width with 0's", integer);
	printf("\n");
	ft_printf("%-60s: |%020X|", "FT (int) minimum field (20) width with 0's", integer);
	printf("\n");
	printf("%-60s: |%020X|", "(hex) minimum field (20) width with 0's", hex);
	printf("\n");
	ft_printf("%-60s: |%020X|", "FT (hex) minimum field (20) width with 0's", hex);
	printf("\n");
	printf("%-60s: |%-20X|", "(int) minimum field (20) left align", integer);
	printf("\n");
	ft_printf("%-60s: |%-20X|", "FT (int) minimum field (20) left align", integer);
	printf("\n");
	printf("%-60s: |%-20X|", "(hex) minimum field (20) left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-20X|", "FT (hex) minimum field (20) left align", hex);
	printf("\n");
	printf("%-60s: |%20.6X|", "precision (6) and minimum (20) field", hex);
	printf("\n");
	ft_printf("%-60s: |%20.6X|", "FT precision (6) and minimum (20) field", hex);
	printf("\n");
	printf("%-60s: |%.6X|", "precision (6) field", integer);
	printf("\n");
	ft_printf("%-60s: |%.6X|", "FT precision (6) field", integer);
	printf("\n");
	printf("%-60s: |%-.6X|", "(hex_neg) precision (6) field left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-.6X|", "FT (hex_neg) precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-20.6X|", "minimum (20) and precision (6) field left align", hex);
	printf("\n");
	ft_printf("%-60s: |%-20.6X|", "FT minimum (20) and precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-*.*X|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n");
	ft_printf("%-60s: |%-*.*X|", "FT hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n\n");*/
	printf("--pointer--\n");
	int *pointer;
	int num;

	num = 42;
	pointer = &num;
	printf("%-60s: |%p|","format identifier", pointer);
	printf("\n");
	ft_printf("%-60s: |%p|","FT format identifier", pointer);
	printf("\n");
	printf("%-60s: |%20p|", "with minimum field (20) width", pointer);
	printf("\n");
	ft_printf("%-60s: |%20p|", "FT with minimum field (20) width", pointer);
	printf("\n");
	printf("%-60s: |%-20p|", "minimum field (20) left align", pointer);
	printf("\n");
	ft_printf("%-60s: |%-20p|", "FT minimum field (20) left align", pointer);
	printf("\n");
}
