/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:48:21 by jiypark           #+#    #+#             */
/*   Updated: 2019/05/28 18:48:24 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t need_len;

	if (!*need)
		return ((char*)hay);
	i = 0;
	while (hay[i] && len >= i)
	{
		need_len = 0;
		while (need[need_len] == hay[i + need_len] && i + need_len < len)
		{
			if (!need[need_len++])
				return ((char *)&hay[i]);
			if (need_len != 0 && !need[need_len])
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
