/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:00 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/02 18:47:31 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbrhexa(unsigned long long content, char const *base)
{
	int		cont;
	int 	tmp;

	cont = 0;
	if (content >= 16)
	{
		tmp = nbrhexa(content / 16, base);
		if(tmp == -1)
			return(-1);
		cont += tmp;
	}
	tmp = write(1, &base[content % 16], 1);
	if(tmp == -1)
		return(-1);
	count += tmp;
	return (cont);
}

int	ft_puthexa(unsigned int content, char format)
{
	char	*base;
	int		size;

	if (!content)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		if (format == 'x')
			base = "0123456789abcdef";
		else
			base = "0123456789ABCDEF";
		size = nbrhexa(content, base);
	}
	return (size);
}
