/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <jiypark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:58:11 by jiypark           #+#    #+#             */
/*   Updated: 2019/06/06 23:35:58 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *resdst, const void *ressrc, int c, size_t n)
{
	size_t				i;
	unsigned char		*des;
	unsigned char		*src;

	i = 0;
	des = (unsigned char *)resdst;
	src = (unsigned char *)ressrc;
	while (i < n)
	{
		des[i] = src[i];
		if ((unsigned char)src[i] == (unsigned char)c)
			return (des + i + 1);
		i++;
	}
	return (NULL);
}
