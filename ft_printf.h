/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:32 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/15 16:24:24 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>

# include <stdarg.h>

int	ft_printf(const char *stringy, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_intlen(long long n);
int	ft_printu(unsigned long long num);
int	ft_printx(unsigned long long num, int upper);
int	ft_counthex(long long num);
int	ft_printx(unsigned long long num, int upper);
int	ft_printp(void *ptr);

#endif