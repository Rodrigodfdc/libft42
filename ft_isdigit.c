/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:51:46 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:52:03 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(unsigned int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = '5';
	if (ft_isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
	c = 'A';
	if (ft_isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
	c = '#';
	if (ft_isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
	return (0);
}
*/
