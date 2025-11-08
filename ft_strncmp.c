/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:02:26 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 21:12:33 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us_s1;
	unsigned char	*us_s2;

	us_s1 = (unsigned char *)s1;
	us_s2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && ((us_s1[i]) || (us_s2[i])))
	{
		if (us_s1[i] != us_s2[i])
			return (us_s1[i] - us_s2[i]);
		i++;
	}
	return (0);
}
