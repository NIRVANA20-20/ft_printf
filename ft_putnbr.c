/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:45:38 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/01 18:00:15 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lennbr(long n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	put_nbr(int n)
{
	int	size;

	if (n == -2147483648)
	{
		size = write(1, "-2147483648", 11);
		return (size);
	}
	size = ft_lennbr(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		put_nbr(n / 10);
	ft_putchar(n % 10 + 48);
	return (size);
}

static int	put_uns(unsigned int n)
{
	int	size;

	size = ft_lennbr(n);
	if (n > 9)
		put_uns(n / 10);
	ft_putchar(n % 10 + 48);
	return (size);
}

int	ft_putnbr(int content, char forma)
{
	int	size;

	if (!content)
	{
		ft_putchar('0');
		return (1);
	}
	if (forma == 'd' || forma == 'i')
		size = put_nbr(content);
	else
		size = put_uns(content);
	return (size);
}
