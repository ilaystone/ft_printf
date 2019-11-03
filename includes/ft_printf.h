/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:08:07 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/03 16:40:41 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**  ----- external includes -----
*/

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"

/*
**  ----- parser.c -----
*/

int     ft_printf(const char *str, ...);
int     ft_istype(int c);

/*
**  -----  numbers.c -----
*/

void	ft_hint(int content);
void	ft_hhex(int content);

#endif
