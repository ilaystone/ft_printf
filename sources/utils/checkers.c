/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:01:21 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/15 17:57:08 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
**	checks for the type
*/

int		is_type(char t)
{
	char	*types;

	types = "cspdiuxX\%";
	while (*types)
	{
		if (*types == t)
			return (TRUE);
		types++;
	}
	return (FALSE);
}

/*
**	checks for the flag
*/

int		is_flag(char f)
{
	char	*flags;

	flags = "0-";
	while (*flags)
	{
		if (*flags == f)
			return (TRUE);
		flags++;
	}
	return (FALSE);
}
