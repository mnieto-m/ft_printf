/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:07:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/28 17:34:49 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_base(size_t n, char *base)
{
	int count;
	size_t len;

	count = 0;
	len = ft_strlen(base);
	if (n > (len - 1))
	{
		ft_putunbr_base((n / len), base);
		n = n % len;
	}
	if (n < len)
		count += (ft_putchar_pf(base[n]));
	return(count);

}
