/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 07:06:25 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/05 17:23:52 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hint(int content)
{
	ft_putnbr(content);
}

void	ft_hhex(int content, int type)
{
	ft_puthex(content, type);
}
