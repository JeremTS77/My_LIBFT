/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 15:27:59 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/15 12:14:54 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_itoa_last(int n, int i, int div, char *str)
{
	int		j;

	j = 0;
	div = 0;
	if (n < 0)
	{
		div = 1;
		n = -n;
		i++;
	}
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	j = i;
	while (--i >= div)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[j] = '\0';
	if (i == 0)
		str[i] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		div;
	char	*str;

	i = 0;
	div = n;
	str = NULL;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (div != 0)
	{
		div = div / 10;
		i++;
	}
	return (ft_itoa_last(n, i, div, str));
}
