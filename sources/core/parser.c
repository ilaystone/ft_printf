/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:40:51 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/14 10:17:49 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

/*
** print normal chars to stdout
*/

static int		print_char(char s)
{
	ft_putchar(s);
	return (ft_wcharlen(s));
}

/*
** cuts the apporobriate string that holds format specifiers
*/

static char		*cut_specs(char *str, char **res)
{
	int		i;

	i = 0;
	while (!is_type(str[i]))
		i++;
	i++;
	*res = ft_substr(str, 0, i);
	return (str + i);
}

/*
** parse on string passed and either print or cut specifieers
** by calling the appropriate functions
** than call handler if needed to handle format
*/

int				parse_string(char *str, va_list args)
{
	int		i;
	char	*s;

	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			str = cut_specs(str, &s);
			i += handle_specs(s, args);
		}
		else
		{
			i += print_char(*str);
			str++;
		}
	}
	free(s);
	return (i);
}
