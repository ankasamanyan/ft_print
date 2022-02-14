/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:32 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 13:09:30 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   LIBFT_H
# define   LIBFT_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
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