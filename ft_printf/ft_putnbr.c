/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:33:44 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 22:46:28 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long long nbr, int a)
{
    int j;
    j = 0;
    j = count_nbr(nbr, 10);
    if (nbr < 0)
    {
        ft_putchar('-', 0);
        nbr *= -1;
    }
    if(nbr <= 9)
        ft_putchar(nbr + 48, 0);
    else
    {
        ft_putnbr(nbr / 10, 0);
        ft_putnbr(nbr % 10, 0);
    }
    return (j);
}