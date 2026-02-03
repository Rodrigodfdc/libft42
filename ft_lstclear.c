/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:15 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:16 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = ft_lstnew("Hello");
	node1 = ft_lstnew("World");
	node2 = ft_lstnew("!");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstclear(&list, free);
	return (0);
}
*/