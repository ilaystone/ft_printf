/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:08:07 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/04 13:20:30 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**  ----- includes -----
*/

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

# include "../sources/libft/libft.h"

/*
**  ----- structs -----
*/

typedef struct      s_fstr
{
    char            *str;
    va_list         args;
}                   t_fstr;

/*
**  ----- protos -----
*/
int     ft_printf(const char *str, ...);
void	ft_hint(int content);
void	ft_hhex(int content, int type);
void    ft_parse_str(va_list args, const char *str);

#endif
