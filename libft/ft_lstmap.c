/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiypark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 04:26:23 by jiypark           #+#    #+#             */
/*   Updated: 2019/06/02 04:26:44 by jiypark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlist;

	nlist = 0;
	if (!lst)
		return (NULL);
	if (lst && f)
	{
		nlist = f(lst);
		if (nlist != NULL && lst->next != NULL)
			nlist->next = ft_lstmap(lst->next, f);
		return (nlist);
	}
	return (nlist);
}
