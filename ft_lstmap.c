/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:11:21 by jrobert           #+#    #+#             */
/*   Updated: 2021/04/14 19:14:41 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_clear(t_list **dst, void **new_content, void (*del)(void *))
{
	if (new_content && del)
		del(new_content);
	if (dst)
		ft_lstclear(dst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*dst;
	void	*new_content;

	if (!f)
		return (NULL);
	dst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_clear(&dst, NULL, del));
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
			return (ft_clear(&dst, new_content, del));
		ft_lstadd_back(&dst, new_elem);
		lst = lst->next;
	}
	return (dst);
}
