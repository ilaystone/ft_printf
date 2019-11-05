/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:42:09 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/05 19:42:50 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void check_flag(char *c, char f)
{
    if (f == '-')
        *c = '-';
    else if (f == '0' && *c != '-')
        *c = '0';
}

int check_width(char **str)
{
    int w;

    w = 0;
    if (ft_isdigit(**str))
        w = ft_atoi(*str);
    while (ft_isdigit(**str++))
        ;
    return (w);
}

int check_precision(char **str)
{
    int p;

    p = 0;
    if (**str == '.')
    {
        str++;
        if (ft_isdigit(**str))
            p = ft_atoi(*str);
        while (ft_isdigit(**str++))
            ;
    }
    return (p);
}