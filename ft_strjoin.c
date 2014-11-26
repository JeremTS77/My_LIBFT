/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 10:10:26 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/10 10:11:28 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		len;
	char	*result;

	index = 0;
	len = 0;
	result = (char *)malloc(sizeof(char) *
			(ft_strlen((char *)s1) + ft_strlen((char *)s2)));
	if (result && s1 && s2)
	{
		len = ft_strlen((char *)s1);
		ft_strcpy((char *)result, (char *)s1);
		while (s2[index] != '\0')
		{
			result[index + len] = s2[index];
			index++;
		}
		result[index + len] = '\0';
		return (result);
	}
	return (NULL);
}
