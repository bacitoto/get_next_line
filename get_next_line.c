/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/05 23:14:09 by fde-mato         ###   ########.fr       */
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
	buffer[BUFFER_SIZE] = '\0';
	if (!buffer[0] && read(fd, buffer, BUFFER_SIZE) < 0)
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
	int		fd = open("TestFile", O_RDONLY);
	char    *str = get_next_line(fd);
	int 	i = 1;
	while(str)
	{
		printf("linha%d %s", i, str);
		i++;
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}