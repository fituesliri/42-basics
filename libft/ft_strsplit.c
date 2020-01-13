/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 15:36:20 by jiypark           #+#    #+#             */
/*   Updated: 2019/06/06 21:59:07 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**wrds;
	int		nwrds;
	int		len;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	nwrds = ft_wordcount((char*)s, c);
	if (!(wrds = (char**)malloc((sizeof(char*) * (nwrds + 1)))))
		return (NULL);
	while (nwrds--)
	{
		while (*s == c && *s)
			s++;
		len = ft_wordlen(s, c);
		if (!(wrds[i] = ft_strsub(s, 0, len)))
			return (NULL);
		s += len;
		i++;
	}
	wrds[i] = NULL;
	return (wrds);
}
