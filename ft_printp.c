/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:21:31 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 15:41:50 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += ft_putstr("0x0");
	else
	{
		count += ft_putstr("0x");
		count += ft_printx(((unsigned long long int)ptr), 0);
	}
	return (count);
}
