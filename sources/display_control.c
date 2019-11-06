/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_control.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:45:33 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 17:19:24 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	display(va_list args, t_larg *lst)
{
	if (lst->type == 'd' || lst->type == 'i')
		ft_display_number(va_arg(args, int), lst);
	if (lst->type == 'x')
		ft_display_hex(va_arg(args, int), lst, L_HEXA);
	if (lst->type == 'X')
		ft_display_hex(va_arg(args, int), lst, U_HEXA);
	if (lst->type == 's')
		ft_display_string(va_arg(args, char*), lst);
}