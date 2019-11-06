/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:11:49 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 17:02:53 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_hand_arg(va_list args, char *str)
{
	t_larg		*lst;
	
	lst = ft_newlarg();
    while (*str)
    {
        check_flag(&lst->flag, *str);
        if (*str == '.')
		{
			str++;
			if (*str == '*')
				lst->precision = va_arg(args, int);
			else
				str = check_size(str, &lst->precision);
		}
		else if (*str == '*')
		{
			lst->width = va_arg(args, int);
			str++;
		}
		else if (ft_isdigit(*str))
			str = check_size(str, &lst->width);
		else
			str++;
    }
	lst->type = str[ft_strlen(str) - 1];
	display(args, lst);
}
