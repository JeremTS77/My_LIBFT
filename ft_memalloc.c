/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:50:42 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/15 19:05:36 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (void *)malloc(size);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
