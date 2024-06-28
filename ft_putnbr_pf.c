/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:31:08 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/28 18:02:50 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		count += (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			count = (write(1, "-", 1));
			n = n * -1;
		}
		else if (n > 9)
		{
			ft_putnbr_pf(n / 10);
			n = n % 10;
		}
		else
			count += ft_putchar_pf(n + 48);
	}
	return(count);
}
