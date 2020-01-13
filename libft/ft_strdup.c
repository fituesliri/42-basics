/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:47:28 by jiypark           #+#    #+#             */
/*   Updated: 2019/05/28 18:47:30 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*s2;

	s2 = (char*)malloc(sizeof(*s2) * (ft_strlen(src) + 1));
	if (!s2)
	{
		return (NULL);
	}
	s2 = ft_strcpy(s2, src);
	return (s2);
}
