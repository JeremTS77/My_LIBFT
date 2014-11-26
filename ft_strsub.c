/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:57:18 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/20 11:37:54 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;
	size_t	check;

	index = 0;
	if (s == NULL)
		return (NULL);
	check = (len > ft_strlen(s)) ? ft_strlen(s) : len;
	dest = (char *)malloc(sizeof(char) * (len > check ? check : len) + 1);
	if (dest != NULL)
	{
		while (check != len && (index < check))
		{
			dest[index] = s[start + index];
			index++;
		}
		while (check == len && (index < len))
		{
			dest[index] = s[start + index];
			index++;
		}
		dest[index] = '\0';
	}
	return (dest);
}
