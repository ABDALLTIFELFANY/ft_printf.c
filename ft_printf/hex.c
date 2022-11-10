/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:43:28 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 23:17:59 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int    hex(long long nbr, char *base, int a)
{
    int j;

    j = count_nbr(nbr, 16);
    if (nbr < 0)
    {
        ft_putchar('-', a);
        nbr *= -1;
    }
    if (nbr < ft_strlen(base))
        ft_putchar(base[(nbr % ft_strlen(base))],a);
    else
    {
        hex(nbr / ft_strlen(base),base,a);
        hex(nbr % ft_strlen(base),base,a);
    }
    return (j);
}