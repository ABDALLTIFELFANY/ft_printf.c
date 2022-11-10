/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:19:06 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 22:46:18 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef FT_PRINTF
 #define FT_PRINTF

# include<stdio.h>
# include<unistd.h>
# include<string.h>
# include<stdlib.h>
# include<fcntl.h>
# include<limits.h>
# include<stdarg.h>

int         ft_putstr(char *str, int a);
int         ft_putnbr(long long nbr, int a);
int         hex(long long nbr, char *base, int a);
int         ft_putchar(char c, int a);
int         ft_printf(const char *str, ...);
int         ft_strlen(char *str);
int	        count_nbr(long long int, int k);
 
#endif