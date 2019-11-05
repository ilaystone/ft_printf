/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 13:08:10 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/05 19:28:27 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/libft/libft.h"
#include "../includes/ft_printf.h"

static int     ft_istype(char c)
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
    char    *s;
    int     i;

    s = (char *)malloc(10);
    i = 0;
    while (*str)
    {
        if (*str == '%' && *(str + 1) != '%')
        {
            while (!ft_istype(*++str))
                s[i++] = *str;
            s[i++] = *str;
            s[i] = '\0';
            ft_hand_arg(args, s);
        }
        else if (*str == '%' && *(str + 1) == '%')
            ft_putchar(*++str);
        else
            ft_putchar(*str);
        str++;
    }
}
