/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:44:32 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/22 16:52:39 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_pointer_pf(void *flag,int *count)
{
	if(flag == NULL)
	{
		write(1,"(nil)", 5);
		(*count) +=5;
	}
	else
	{
		write(1,"0x",2);
		(*count) += 2;
		ft_putunbr_base((size_t)flag, "0123456789ABCDF", count);
	}
}