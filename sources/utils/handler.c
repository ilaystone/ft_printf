/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:11:14 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/14 21:52:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** handle specs send to it by the string and than output sets a propre struct
** than call the display organizer to display propre data
*/

int		handle_specs(char *specs, va_list args)
{
	t_form	form;

	init_t_form(&form);
	form.type = specs[ft_strlen(specs) - 1];
	while (*specs)
	{
		if (is_flag(*specs))
			specs = set_flag(specs, &form.flag);
		else if (*specs == '.')
		{
			specs++;
			if (*specs == '*')
			{
				form.precision = va_arg(args, int);
				specs++;
			}
			else
				specs = set_p(specs, &form.precision);
		}
		else if (ft_isdigit(*specs))
			specs = set_p(specs, &form.width);
		else if (*specs++ == '*')
			form.width = va_arg(args, int);
	}
	return (display_f_content(form, args));
}
