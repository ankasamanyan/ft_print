/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:44:35 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 16:50:07 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned long long num, int upper)
{
	if (num >= 16)
	{
		ft_printx(num / 16, upper);
		ft_printx(num % 16, upper);
	}
	else
	{
		if (num < 10)
			ft_putnbr(num);
		else
		{
			if (upper == 0)
				ft_putchar('a' + num - 10);
			else if (upper == 1)
				ft_putchar('A' + num - 10);
		}
	}
}

int	ft_printx(unsigned long long num, int upper)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, upper);
	return (ft_counthex(num));
}
