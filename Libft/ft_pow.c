/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 22:44:21 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/07 23:23:12 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int a, int b)
{
	int i;
	int a1;

	i = 0;
	if (b == 0)
		return (1);
	a1 = a;
	while (i < b - 1)
	{
		a = a * a1;
		i++;
	}
	return (a);
}
