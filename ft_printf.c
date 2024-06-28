/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:24:35 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/22 19:38:50 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_checker(va_list args, const char *flag, int *count )
{
	if(*flag == 'c')
		ft_putchar_pf(va_arg(args, int), count);
	else if(*flag =='s')/*print string*/
		ft_putstr_pf(va_arg(args, char *), count);
	else if(*flag =='p')/*print void pointer hex*/
		ft_pointer_pf(va_arg(args, void*), count);
	else if(*flag == 'd')/*print decimal*/
		ft_putnbr_pf(va_arg(args, int), count);
	else if(*flag =='i')/* print integer*/
		ft_putnbr_pf(va_arg(args, int), count);
	else if(*flag == 'u')/* print unsigned */
		ft_putunbr_base(va_arg(args, unsigned int), "0123456789" , count);
	else if(*flag =='x')/* print hex */
		ft_putunbr_base(va_arg(args, unsigned int),"0123456789abcdef", count);
	else if(*flag =='X')/* print hex caps */
		ft_putunbr_base(va_arg(args, unsigned int),"0123456789ABCDEF", count);
	else if(*flag == '%')/* print % */
		ft_putchar_pf(*flag, count);
}

int ft_printf(const char *flag, ...)
{
	va_list	args;
	int	count;
	int	i;

	i = 0;
	count = 0;
	va_start(args,flag);
	while(*flag)
	{
		if(flag[i] == '%')
		{
			i++;
			ft_checker(args, flag + i, &count);
		}
		else
		{
			ft_putchar_pf(flag[i], &count);
			i++;
		}
	}
	va_end(args);
	return(count);
}

