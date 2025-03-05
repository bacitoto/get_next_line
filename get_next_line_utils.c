/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:22 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/05 22:06:33 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_linelen(char *str)
{
	size_t	n;
	
	if (!str)
		return(0);
	n = 0;
	while (str[n] && str[n] != '\n')
		n++;
	if (str[n] == '\n')
		n++;
	return (n);
}
int	ft_cleanbuf_gnl(char *str)
{
	int	check_nl;
	int	i;
	int	j;

	check_nl = 0;
	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
	{
		check_nl++;
		i++;
		while (str[i])
			str[j++] = str[i++];
	}
		while (j <= BUFFER_SIZE)
			str[j++] = '\0';
	return (check_nl);
	}
char	*ft_strjoin(char *s1, char *buffer)
{
	size_t	i;
	size_t	k;
	size_t	len1;
	size_t	len2;
	char	*dest;

	i = 0;
	k = 0;
	len1 = ft_linelen(s1);
	len2 = ft_linelen(buffer);
	dest = malloc(len1 + len2 + 1);
	if (!dest)
		return (free(s1), NULL);
	while (i < len1)
	{
		dest[i] = s1[i];
		i++;
	}
	while (k < len2)
	{
		dest[i + k] = buffer[k];
		k++;
	}
	dest[i + k] = '\0';
	return (free(s1), dest);
}
