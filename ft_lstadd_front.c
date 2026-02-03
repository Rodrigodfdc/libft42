/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:05 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:06 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*new_node;

	head = ft_lstnew("Hello, World!");
	new_node = ft_lstnew("New Node");
	ft_lstadd_front(&head, new_node);
	if (head)
	{
		printf("Head content: %s\n", (char *)head->content);
		printf("New node content: %s\n", (char *)head->next->content);
		free(head->next);
		free(head);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
*/