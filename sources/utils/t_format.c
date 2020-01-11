/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:42:49 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/15 14:36:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** init the form and create it
*/

void	init_t_form(t_form *res)
{
	res->precision = -1;
	res->width = 0;
	res->flag = ' ';
	res->type = '\0';
}

/*
** set flag and return a opinter to the char after the flag
*/

char	*set_flag(char *s, char *f)
{
	while (is_flag(*s))
	{
		*f = (*f == '-') ? *f : *s;
		s++;
	}
	return (s);
}

/*
** set padding and / or precision
*/

char	*set_p(char *s, int *f)
{
	*f = ft_atoi(s);
	while (ft_isdigit(*s))
		s++;
	return (s);
}
