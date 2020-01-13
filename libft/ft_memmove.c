/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <jiypark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:46:27 by jiypark           #+#    #+#             */
/*   Updated: 2019/06/07 00:34:46 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char*)src;
	ptr2 = (unsigned char*)dst;
	if (src == dst)
		return (dst);
	i = 0;
	if (ptr1 < ptr2)
	{
		while ((int)--len >= 0)
			ptr2[len] = ptr1[len];
	}
	else
	{
		while (i < len)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (dst);
}
