/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:25:27 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 09:25:41 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	reset_larg(t_larg *lst)
{
	lst->flag = '\0';
	lst->flag = '\0';
	lst->width = 0;
	lst->precision = 0;
}

t_larg	*ft_newlarg()
{
	t_larg		*new;
	if (!(new = (t_larg *)malloc(sizeof(t_larg))))
		return (NULL);
	reset_larg(new);
	return (new);
}