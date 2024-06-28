/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:24:35 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/28 17:59:40 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_checker(va_list args, const char *flag)
{
	if (*flag == 'c')
		return(ft_putchar_pf(va_arg(args, int)));
	else if (*flag == 's') /*print string*/
		return(ft_putstr_pf(va_arg(args, char *)));
	else if (*flag == 'p') /*print void pointer hex*/
		return(ft_pointer_pf(va_arg(args, void *)));
	else if (*flag == 'd') /*print decimal*/
		return(ft_putnbr_pf(va_arg(args, int)));
	else if (*flag == 'i') /* print integer*/
		return(ft_putnbr_pf(va_arg(args, int)));
	else if (*flag == 'u') /* print unsigned */
		return(ft_putunbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (*flag == 'x') /* print hex */
		return(ft_putunbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*flag == 'X') /* print hex caps */
		return(ft_putunbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*flag == '%') /* print % */
		return(ft_putchar_pf(*flag));
	return(-1);
}

int	ft_printf(const char *flag, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, flag);
	while (flag[i])
	{
		if (flag[i] == '%')
		{
			i++;
			count += (ft_checker(args, &flag[i]));
		}
		else
			count += (ft_putchar_pf(flag[i]));
		i++;
	}
	va_end(args);
	return (count);
}
