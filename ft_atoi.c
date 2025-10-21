/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:53:24 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/21 16:22:50 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	frag;
	int	sq;

	i = 0;
	frag = 0;
	sq = 0;
	while (!((nptr[i] == '-') || ((nptr[i] >= '0') && (nptr[i] <= '9'))))
		i++;
	while ((nptr[i] == '-') || ((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		if (nptr[i] == '-')
			frag = 1;
		else
			sq = sq * 10 + (nptr[i] - '0');
		i++;
	}
	if (frag == 1)
		sq = -sq;
	return (sq);
}
