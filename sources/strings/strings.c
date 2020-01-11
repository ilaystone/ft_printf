/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:21:49 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/15 14:54:47 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

static char		*set_precision(char *s, int p)
{
	char	*res;

	res = (char *)malloc(p + 1);
	res[p] = '\0';
	res = ft_strncpy(res, s, p);
	return (res);
}

static char		*set_width(char *s, t_form f)
{
	char	*res;
	char	a;
	int		i;

	i = f.width - ft_strlen(s);
	if (i < 0)
		i = 0;
	res = (char *)malloc(i);
	res[i] = '\0';
	ft_memset(res, f.flag != '-' ? f.flag : ' ', i);
	if (f.flag == '-')
		s = ft_strjoin(s, res);
	else
		s = ft_strjoin(res, s);
	free(res);
	return (s);
}

/*
** display formated strings
*/

int				display_string(char *c, t_form f)
{
	int		i;

	if (!c)
		c = ft_strdup("(null)");
	if (f.precision != -1)
		c = set_precision(c, f.precision);
	c = set_width(c, f);
	i = ft_wstrlen(c);
	ft_putstr(c);
	free(c);
	return (i);
}
