/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:48 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 15:54:55 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			if (stringy[i + 1] == '%')
				count += ft_putchar('%');
			else if(stringy[i + 1] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (stringy[i + 1] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (stringy[i + 1] == 'i' || stringy[i + 1] == 'd')
				count += ft_putnbr(va_arg(args, int));
			else if (stringy[i + 1] == 'u')
				count += ft_printu(va_arg(args, unsigned int));
			else if (stringy[i + 1] == 'x')
				count += ft_printx(va_arg(args, unsigned int), 0);
			else if (stringy[i + 1] == 'X')
				count += ft_printx(va_arg(args, unsigned int), 1);
			else if (stringy[i + 1] == 'p')
				count += ft_printp(va_arg(args, void *));
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
