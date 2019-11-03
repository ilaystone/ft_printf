/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 10:43:30 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/03 16:51:28 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *str, ...)
{
	va_list		args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar('%');
			else if (*str == 'i' || *str == 'd')
				ft_hint(va_arg(args, int));
			else if (*str == 'x' || *str == 'X')
				ft_hhex(va_arg(args, int));
			else if (*str == 'c')
				ft_putchar(va_arg(args, int));
			else if (*str == 's')
				ft_putstr(va_arg(args, char *));
			str++;
		}
		else
			ft_putchar(*str++);
	}
	va_end(args);
	return (0);
}
