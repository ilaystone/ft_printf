/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 15:43:11 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/03 16:54:09 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int     main(void)
{
	int i;
	i = 10;
	char c = 'Z';
	char *str;
	str = "ilyass";

	printf("%c %s %ddddddd %h", c, str, i, i);
	return (0);
}
