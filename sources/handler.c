/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:11:49 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/05 19:47:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    reset_args(char *f, int *w, int *p)
{
    *f = 'n';
    *w = 0;
    *p = 0;
}

void    ft_hand_arg(va_list args, char *str)
{
    char flag;
    int width;
    int precision;

    while (*str)
    {
        reset_args(&flag, &width, &precision);
        check_flag(&flag, *str);
        width = check_width(&str);
        precision = check_precision(&str);
        str++;
    }
    if (str[ft_strlen(str) - 1] == 'd' || str[ft_strlen(str) - 1] == 'i')
    {
        ft_putchar(flag);
        ft_putchar(' ');
        ft_hint(va_arg(args, int));
    }
}
