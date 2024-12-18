/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:40:55 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/30 15:39:41 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	case_conditions(const char *str, va_list ap);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printnum(int n);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_lower_hexa(unsigned int n);
int	ft_print_upper_hexa(unsigned int n);
int	ft_print_ptr(void *ptr);

#endif
