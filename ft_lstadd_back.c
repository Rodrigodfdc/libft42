/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:52:50 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:52:53 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*new_node;

	head = ft_lstnew("Hello");
	new_node = ft_lstnew("World");
	ft_lstadd_back(&head, new_node);
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	return (0);
}
*/