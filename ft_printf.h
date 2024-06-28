#ifndef FTPRINTF_H
# define FTPRINTF_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int ft_printf(char const *flag, ...);
int ft_putnbr_pf(int n);
int ft_pointer_pf(void *flag);
int ft_putchar_pf(char c);
int ft_putnbr_pf(int n);
int ft_putunbr_base(size_t n, char *base);
int ft_putstr_pf(char *s);
size_t ft_strlen(const char *s);

#endif