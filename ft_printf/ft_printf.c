/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:32:48 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 23:19:06 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_count_op(const char *str, va_list arg, int a,int j)
{
	while(str[++a])
	{
		if ((str[a] == '%' && str[a + 1] == 'd')
			|| (str[a] == '%' && str[a + 1] == 'i'))
			j += ft_putnbr(va_arg(arg, int), a++);
		else if (str[a] == '%' && str[a + 1] == 'X')
			hex(va_arg(arg, unsigned int), "0123456789ABCDEF", a++);
		else if ((str[a] == '%' && str[a + 1] == 'c'))
			j += ft_putchar(va_arg(arg, int), a++);
		else if (str[a] == '%' && str[a + 1] == 'u')
			ft_putnbr((unsigned int)va_arg(arg, int), a++);
		else if (str[a] == '%' && str[a + 1] == 's')
			j += ft_putstr(va_arg(arg, char *), a++);
		else if (str[a] == '%' && str[a + 1] == 'x')
			j += hex(va_arg(arg, unsigned int), "0123456789abcdef", a++);
		else if (str[a] == '%' && str[a + 1] == 'p')
		{
			j += ft_putstr("0x", a);
			j += hex(va_arg(arg, unsigned long long), "0123456789abcdef", a++);
		}
		else
			j += ft_putchar(str[a],a);
		if (str[a] == '%' && str[a + 1] == '%')
			a++;
	}
	return j;
}

int	ft_printf(const char *str, ...)
{
	int		a;
	int		j;
	va_list	arg;

	a = -1;
	va_start(arg, str);
	j = find_count_op(str, arg, a, 0);
	va_end(arg);
	return (j);
}

int main()
{
	char *str;
	//int a = ft_printf("%%%d %s|end\n", str, 1233);
	int b =    printf("%%%d %s|end\n", str, 1233);
	printf("%d\n", a);
	printf("%d",b);
}