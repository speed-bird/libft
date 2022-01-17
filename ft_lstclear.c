/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:10:59 by jrobert           #+#    #+#             */
/*   Updated: 2021/04/14 15:42:13 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = NULL;
	temp = *lst;
	while (temp)
	{
		(*del)(temp->content);
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
	*lst = NULL;
}
