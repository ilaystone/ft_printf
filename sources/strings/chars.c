/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:14:55 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/15 14:37:55 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** display formated chars
*/

int		display_char(char c, t_form f)
{
	int i;

	i = 0;
	if (f.flag == '-')
		ft_putchar(c);
	while (i < f.width - 1)
	{
		ft_putchar(f.flag != '-' ? f.flag : ' ');
		i++;
	}
	if (f.flag != '-')
		ft_putchar(c);
	return (ft_wcharlen(c) + i);
}
