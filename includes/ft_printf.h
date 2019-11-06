/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:08:07 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 17:07:45 by ikhadem          ###   ########.fr       */
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
**	----- structs -----
*/

typedef struct 	s_larg
{
	char		type;
	char		flag;
	int			precision;
	int			width;
}				t_larg;

/*
**  ----- protos -----
*/

int     ft_printf(const char *str, ...);
void	ft_display_number(int content, t_larg *lst);
void	ft_display_hex(int content, t_larg *lst, int type);
void    ft_parse_str(va_list args, const char *str);
void    ft_hand_arg(va_list args, char *str);
void    check_flag(char *c, char f);
char	*check_size(char *str, int *i);
t_larg	*ft_newlarg();
void	reset_larg(t_larg *lst);
void	display(va_list args, t_larg *lst);
void	ft_display_string(char *str, t_larg *lst);

#endif
