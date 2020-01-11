/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:11:03 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/17 23:11:15 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define TRUE 1
# define FALSE 0

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_form
{
	int			width;
	int			precision;
	char		flag;
	char		type;
}				t_form;

int				ft_printf(const char *str, ...);
int				parse_string(char *str, va_list args);
int				is_type(char t);
int				handle_specs(char *specs, va_list args);
int				is_flag(char f);
char			*set_flag(char *s, char *f);
char			*set_p(char *s, int *p);
void			init_t_form(t_form *res);
int				display_f_content(t_form form, va_list args);
int				display_char(char c, t_form f);
int				display_string(char *c, t_form f);
char			*ft_itoa_pbase(long c, int base, int p);
int				display_int(long c, t_form f);
int				display_hex(long c, t_form f);
int				display_pointer(long c, t_form f);
int				display_unsigned(unsigned int c, t_form f);

#endif
