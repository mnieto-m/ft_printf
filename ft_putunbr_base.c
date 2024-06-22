/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:07:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/22 16:52:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putunbr_base(size_t n, char *base, int *count)
{
	size_t len;

	len = ft_strlen(base);
		if (n > (len - 1))
		{
			ft_putunbr_base((n / len), base,count);
			n = n % len;
		}
		if (n < len)
			ft_putchar_pf(base[n], count);
}
