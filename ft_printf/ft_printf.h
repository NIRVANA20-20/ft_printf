/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaizi <olaizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:34:01 by olaizi            #+#    #+#             */
/*   Updated: 2025/11/01 17:58:28 by olaizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *txt, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int content, char forma);
int	ft_puthexa(long content, char format);
int	ft_putchar(char c);
int	ft_putadrr(void *addr);

#endif
