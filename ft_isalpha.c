/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:49:22 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:51:12 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(unsigned int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'A';
	if (ft_isalpha(c))
		printf("%c is an alphabetic character\n", c);
	else
		printf("%c is not an alphabetic character\n", c);
	c = '1';
	if (ft_isalpha(c))
		printf("%c is an alphabetic character\n", c);
	else
		printf("%c is not an alphabetic character\n", c);
	c = '#';
	if (ft_isalpha(c))
		printf("%c is an alphabetic character\n", c);
	else
		printf("%c is not an alphabetic character\n", c);
	return (0);
}
*/
