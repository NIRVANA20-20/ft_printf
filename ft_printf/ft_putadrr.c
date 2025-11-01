/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:39:07 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/01 17:59:57 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrr(void *addr)
{
	int		size;
	long	nbr;

	nbr = (long)addr;
	if (!nbr)
	{
		size = write(1, "(nil)", 5);
		return (size);
	}
	size = ft_putstr("0x");
	size += ft_puthexa(nbr, 'x');
	return (size);
}
