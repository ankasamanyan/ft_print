/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:48 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/15 15:49:19 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char str, va_list *args)
{
	int	count;

	count = 0;
	if (str == '%')
		count += ft_putchar('%');
	if (str == 'c')
		count += ft_putchar(va_arg(*args, int));
	if (str == 's')
		count += ft_putstr(va_arg(*args, char *));
	if (str == 'i' || str == 'd')
		count += ft_putnbr(va_arg(*args, int));
	if (str == 'u')
		count += ft_printu(va_arg(*args, unsigned int));
	if (str == 'x')
		count += ft_printx(va_arg(*args, unsigned int), 0);
	if (str == 'X')
		count += ft_printx(va_arg(*args, unsigned int), 1);
	if (str == 'p')
		count += ft_printp(va_arg(*args, void *));
	return (count);
}

int	ft_printf(const char *stringy, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, stringy);
	while (stringy[i] != '\0')
	{
		if (stringy[i] == '%')
		{
			count += ft_check(stringy[i + 1], &args);
			i += 2;
		}
		else
		{
			count += ft_putchar(stringy[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
