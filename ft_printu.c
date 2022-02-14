/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:03:23 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/13 17:17:23 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned long long num)
{
	int		count;
	char	c;

	count = ft_intlen(num);
	if (num >= 10)
	{
		ft_printu(num / 10);
		ft_printu(num % 10);
	}
	else if (num < 10)
	{
		c = num + '0';
		ft_putchar(c);
	}
	return (count);
}	
