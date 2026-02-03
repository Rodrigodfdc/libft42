/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:00:23 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 19:00:27 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		printf("%c -> %c\n", i, ft_toupper(i));
		i++;
	}
	return (0);
}
*/
