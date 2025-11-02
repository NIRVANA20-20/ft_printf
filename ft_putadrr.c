/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:39:07 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/02 18:51:38 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex(unsigned long long nbr)
{
	char	*hexa;
	int		count;
	int		nbr_f;

	count = 0;
	hexa = "0123456789abcdef";
	if (nbr != 0)
	{
		count += put_hex(nbr / 16);
		nbr_f = count;
		count += write(1, &hexa[nbr % 16], 1);
		if(count < nbr_f)
			return(-1);
	}
	return (count);
}

int	ft_putaddr(void *addr)
{
	int					size;
	unsigned long long	nbr;

	nbr = (long)addr;
	if (!nbr)
	{
		size = write(1, "(nil)", 5);
		return (size);
	}
	size = ft_putstr("0x");
	size += put_hex(nbr);
	return (size);
}
