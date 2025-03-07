/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:22 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/07 22:01:22 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_linelen(char *str)
{
	size_t	n;

	if (!str)
		return (0);
	n = 0;
	while (str[n] && str[n] != '\n')
		n++;
	if (str[n] == '\n')
		n++;
	return (n);
}

void	ft_buffshort(char *buffer)
{
	int	i;
	int	k;
	int	found_newline;

	i = 0;
	k = 0;
	found_newline = 0;
	if (buffer == NULL)
		return ;
	while (buffer[i])
	{
		if (found_newline != '\0')
		{
			buffer[k] = buffer[i];
			k++;
		}
		if (buffer[i] == '\n')
			found_newline = 1;
		buffer[i] = '\0';
		i++;
	}
}

char	*ft_strjoin(char *line, char *buffer)
{
	size_t	i;
	size_t	k;
	size_t	len1;
	size_t	len2;
	char	*dest;

	i = 0;
	k = 0;
	len1 = ft_linelen(line);
	len2 = ft_linelen(buffer);
	dest = malloc(len1 + len2 + 1);
	if (!dest)
		return (free(line), NULL);
	while (i < len1)
	{
		dest[i] = line[i];
		i++;
	}
	while (k < len2)
	{
		dest[i + k] = buffer[k];
		k++;
	}
	dest[i + k] = '\0';
	return (free(line), dest);
}
