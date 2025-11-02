/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:45:30 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/02 11:47:17 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *txt, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int content, char forma);
int	ft_puthexa(unsigned int content, char format);
int	ft_putchar(char c);
int	ft_putaddr(void *addr);

#endif
