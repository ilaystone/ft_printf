/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:42:09 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 16:13:45 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	check_flag(char *c, char f)
{
    if (f == '-')
        *c = '-';
    else if (f == '0' && *c != '-')
        *c = '0';
}

/*
**	this function get the width or precision if any is found
*/

char	*check_size(char *str, int *i)
{
	if (ft_isdigit(*str))
	{
		*i = ft_atoi(str);
		while (ft_isdigit(*str))
			str++;
	}
	return (str);
}