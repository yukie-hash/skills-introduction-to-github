/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:54:20 by hamada            #+#    #+#             */
/*   Updated: 2025/10/28 19:44:07 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_set(char const c, char const *set)
{
	int	t;

	t = 0;
	while (set[t])
	{
		if (c == set[t])
			return (1);
		else
			t++;
	}
	return (0);
}

int	back_skip(char const *s1, char const *set, int f, int len)
{
	int	b;

	b = len - 1;
	while ((b >= f) && (skip_set (s1[b], set)))
		b--;
	return (b);
}

int	front_skip(char const *s1, char const *set)
{
	int	f;

	f = 0;
	while ((s1[f]) && (skip_set (s1[f], set)))
		f++;
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		f;
	int		b;
	int		t;
	int		len;
	char	*str;

	len = ft_strlen (s1);
	f = front_skip (s1, set);
	b = back_skip (s1, set, f, len);
	t = 0;
	str = malloc (sizeof(char) * (b - f + 2));
	if (!str)
		return (0);
	while (f <= b)
		str[t++] = s1[f++];
	str[t] = '\0';
	return (str);
}
