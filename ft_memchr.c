/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:54:21 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:54:24 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";
	char	*result;

	result = ft_memchr(str, 'W', 13);
	if (result != 0)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return (0);
}
*/
