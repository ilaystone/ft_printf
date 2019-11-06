/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 15:43:11 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 09:34:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int     ft_istype(char c)
{
    char *str;
    str = "cspdiuxX";
    while (*str)
        if (*str++ == c)
            return (1);
    return (0);
}

int     main(void)
{
	ft_printf("%*.*d  %*.5d  %7.*d", 1, 2, 3, 4, 6, 8, 9);
	return (0);
}
