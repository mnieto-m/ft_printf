/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:24:35 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/14 18:45:58 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *flag, ...)
{
	int	count;
	va_list	args;

	va_list(args,flag);
	va_end(args);
	return(count);
}
int checker()
{
	if('c')
	return (1);
	else if('s');
	return (1);
	else if('p');
	return (1);
	else if('d');
	return (1);
	else if('i');
	return (1);
	else if('u');
	return (1);
	else if('x');
	return (1);
	else if('X');
	return (1);
	else if('%');
	return (ft_putchar('%'));
}
