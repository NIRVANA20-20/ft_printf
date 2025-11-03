/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:34:04 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/02 21:06:25 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_helper(va_list *args, char forma, int *size)
{

	    if (forma == 'c')
	    	*size += ft_putchar(va_arg(*args, int));
	    else if (forma == 's')
	    	*size += ft_putstr(va_arg(*args, char *));
	    else if (forma == 'd' || forma == 'i')
	    	*size += ft_putnbr(va_arg(*args, int), forma);
		else if (forma == 'u')
	    	*size += ft_putnbr(va_arg(*args, unsigned int), forma);
	    else if (forma == 'x' || forma == 'X')
	    	*size += ft_puthexa(va_arg(*args, unsigned int), forma);
	    else if (forma == 'p')
	    	*size += ft_putaddr(va_arg(*args, void *));
	    else if (forma == '%')
	    	*size += ft_putchar('%');

}
int	ft_printf(const char *txt, ...)
{
	va_list		print;
	int			i;
	int			size;

	va_start(print, txt);
	if (!txt)
		return (-1);
	i = 0;
	size = 0;
	while (txt[i])
	{
		if (txt[i] == '%' && txt[i+1])
		{
			i++;
			printf_helper(print, txt[i], &size);
			if(size == -1)
			{
				return (-1);
				va_end(print);
			}			
		}
		else
		{
			size += ft_putchar(txt[i]);
			if(size == -1)
			{
				return (-1);
				va_end(print);
			}
		}
		i++;
	}
	va_end(print);
	return (size);
}
