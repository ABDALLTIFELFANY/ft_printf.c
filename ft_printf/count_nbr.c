/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:54:43 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 22:46:08 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_nbr(long long cnt, int k)
{
    int a;

    a = 0;
    if(cnt < 0)
    {
        a++;
        cnt *= -1;
    }
    while(cnt > 0)
    {
        cnt = cnt / k;
        a++;
    }
	return (a);
}