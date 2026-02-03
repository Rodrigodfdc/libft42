/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:51:01 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:51:09 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	int c = 65; // ASCII value for 'A'
	if (ft_isascii(c))
		printf("%c is an ASCII character\n", c);
	else
		printf("%c is not an ASCII character\n", c);
	c = 128; // Non-ASCII value
	if (ft_isascii(c))
		printf("%c is an ASCII character\n", c);
	else
		printf("%c is not an ASCII character\n", c);
	return (0);
}
*/
