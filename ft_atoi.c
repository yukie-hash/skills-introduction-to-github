/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:53:24 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/09 22:26:00 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	is_minus;
	int	nb;

	i = 0;
	is_minus = 0;
	nb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		is_minus = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	if (is_minus == 1)
		nb = -nb;
	return (nb);
}
