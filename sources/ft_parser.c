/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 13:08:10 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/04 14:09:05 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/libft/libft.h"
#include "../includes/ft_printf.h"

int     ft_istype(char c)
{
    char *str;
    str = "cspdiuxX";
    while (*str)
        if (*str++ == c)
            return (1);
    return (0);
}

void    ft_parse_str(va_list args, const char *str)
{
    while (*str)
    {
        if (*str == '%')
        {
        }
        else
            ft_putchar(*str);
        str++;
    }
}
