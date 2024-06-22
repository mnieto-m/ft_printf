#ifndef PRINTF_H
# define PRINTF_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int ft_printf(char const *flag, ...);
void	ft_putnbr_pf(int n, int *count);
void	ft_pointer_pf(void *flag,int *count);
void	ft_putchar_pf(char c, int *count);
void	ft_putnbr_pf(int n, int *count);
void	ft_putunbr_base(size_t n, char *base, int *count);
void	ft_putstr_pf(char *s, int *count);

#endif