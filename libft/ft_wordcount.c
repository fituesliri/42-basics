/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 20:31:30 by jiypark           #+#    #+#             */
/*   Updated: 2019/06/01 20:36:31 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char c)
{
	size_t i;
	size_t wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (wc);
}
