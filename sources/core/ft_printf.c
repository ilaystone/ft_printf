/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:10:44 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/14 11:30:08 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** printf formated string to stdout
*/

int		ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;

	va_start(args, str);
	i = parse_string((char *)str, args);
	va_end(args);
	return (i);
}
