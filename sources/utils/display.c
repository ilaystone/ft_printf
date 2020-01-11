/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:16:29 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/17 23:07:49 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** invoc a propre display function based on the type
*/

int		display_f_content(t_form form, va_list args)
{
	if (form.type == 'c')
		return (display_char(va_arg(args, int), form));
	else if (form.type == 's')
		return (display_string(va_arg(args, char*), form));
	else if (form.type == 'p')
		return (display_pointer(va_arg(args, long), form));
	else if (form.type == 'd' || form.type == 'i')
		return (display_int(va_arg(args, int), form));
	else if (form.type == 'u')
		return (display_unsigned(va_arg(args, int), form));
	else if (form.type == 'x' || form.type == 'X')
		return (display_hex(va_arg(args, long), form));
	else if (form.type == '%')
		return (display_char('%', form));
	return (0);
}
