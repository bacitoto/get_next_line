/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:22 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/04 18:34:11 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_linelen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}
#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	k;
	char	*dest;

	i = 0;
	k = 0;
	if (!str1 && !str2)
		return (NULL);
	if (ft_strlen(str1) + ft_strlen(str2) == 0)
		return (ft_strdup(""));
	dest = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (str1[i])
	{
		dest[i] = str1[i];
		i++;
	}
	while (str2[k])
	{
		dest[i + k] = str2[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
