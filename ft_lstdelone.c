/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:33 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:35 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*node;
	int		*content;

	content = malloc(sizeof(int));
	*content = 42;
	node = ft_lstnew(content);
	ft_lstdelone(node, free);
	return (0);
}
*/