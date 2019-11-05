/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 15:43:11 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/05 19:26:10 by ikhadem          ###   ########.fr       */
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
    ft_printf("ilyass %-5.8d %% %d", 15, 28);
	return (0);
}
