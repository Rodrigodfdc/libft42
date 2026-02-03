/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:41 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:43 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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
	ft_lstiter(list, &ft_putstr_fd);
	return (0);
}
*/