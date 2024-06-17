/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:24:35 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/17 20:04:30 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int checker(va_list args,char const *flag, int count )
{
	if('c')
		return (ft_putchar(var_list,1));
	else if('s');/*print string*/
		return (ft_putstr_fd(var_lis,1));
	else if('p');/*print void pointer hex*/
		return (1);
	else if('d');/*print decimal*/
		return (1);
	else if('i');/* print integer*/
		return (1);
	else if('u');/* print unsigned */
		return (1);
	else if('x');/* print hex */
		return (1);
	else if('X');/* print hex caps */
		return (1);
	else if('%');/* print % */
		return (ft_putchar_fd('%',fd));
}
int ft_printf(char const *flag, ...)
{
	size_t	count;
	size_t	i;
	va_list	args;

	i = 0;
	va_list(args,flag);
	while(*flag)
	{
		if(flag[i] = '%')
		{
			int checker(var_lis, count);
		}
		else
		{
			ft_putchar(var_list,count)
			i++;
		}
	}

	va_end(args);
	return(count);
}
