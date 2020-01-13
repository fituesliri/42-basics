/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 22:15:12 by jiypark           #+#    #+#             */
/*   Updated: 2019/05/30 22:15:47 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[i]))
		i++;
	while (ft_iswhitespace(s[len - 1]))
		len--;
	len = len - i;
	if (!(str = (char*)ft_strnew(len >= 0 ? len : 0)))
		return (NULL);
	j = -1;
	while (++j < len)
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}
