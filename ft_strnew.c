/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 18:04:57 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/19 11:20:19 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (i <= size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
