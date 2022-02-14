/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:29:02 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 15:46:04 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_counthex(unsigned long long num)
{
	unsigned long long	i;

	i = 0;
	if (num == 0)
		i++;
	while (num > 0)
	{
		i++;
		num /= 16;
	}
	return (i);
}
