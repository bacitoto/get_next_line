/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:22 by fde-mato          #+#    #+#             */
/*   Updated: 2025/02/19 16:18:45 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_linelen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	l1;
	size_t	l2;

	i = 0;
	k = 0;
	l1 = 0;
	l2 = 0;
	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l2++;
	if (size <= l1)
	{
		return (size + l2);
	}
	i = l1;
	while ((src[k] != '\0') && (i + 1 < size))
	{
		dest[i++] = src[k++];
	}
	dest[i] = '\0';
	return (l1 + l2);
}
