/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:00 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/01 19:22:55 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	contsize(long nbr)
{
	int	cmp;

	if (nbr == 0)
		return (1);
	cmp = 0;
	while (nbr > 0)
	{
		cmp++;
		nbr /= 16;
	}
	return (cmp);
}

static char	*nbrhexa(long content, char const *base)
{
	int		nbr;
	int		i;
	char	*stk;

	nbr = content;
	stk = malloc(contsize(nbr) + 1);
	i = contsize(nbr);
	stk[i--] = '\0';
	while (nbr > 0)
	{
		stk[i] = base[nbr % 16];
		nbr /= 16;
		i--;
	}
	return (stk);
}
#include "stdio.h"
int	ft_puthexa(long content, char format)
{
	char	*base;
	char	*str;
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
		str = nbrhexa(content, base);
		size = ft_putstr(str);
		free(str);
	}
	return (size);
}
