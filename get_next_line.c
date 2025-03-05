/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/05 22:05:13 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
//	buffer = malloc((BUFFER_SIZE + 1));
	buffer[BUFFER_SIZE] = '\0';
	if (!buffer[0])
		if (read(fd, buffer, BUFFER_SIZE) < 0)
			return (NULL);
	while(buffer[0])
	{
		line = ft_strjoin(line, buffer);
		if (!line)
			return (NULL);
		if (ft_cleanbuf_gnl(buffer) == 1)
			break ;
		if (read(fd, buffer, BUFFER_SIZE) < 0)
			return (free(line), NULL);
	}
	return(line);
}
int main(void)
{
	char    *str;
	int     fd;
	int 	i = 1;
	fd = open("TestFile", O_RDONLY);
	str = get_next_line(fd);
	while(str)
	{
		printf("str%d = %s", i, str);
		i++;
		free(str);
		str = get_next_line(fd);
	}
	return (0);
}