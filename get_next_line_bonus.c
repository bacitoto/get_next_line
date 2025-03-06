/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/06 17:25:30 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
	{
		if (fd > 0 && fd < FOPEN_MAX)
			buffer[fd][0] = '\0';
		return (NULL);
	}
	if (!buffer[fd][0] && read(fd, buffer[fd], BUFFER_SIZE) < 0)
		return (NULL);
	while (buffer[fd][0])
	{
		line = ft_strjoin(line, buffer[fd]);
		if (!line)
			return (NULL);
		ft_buffshort(buffer[fd]);
		if (line[ft_strlen(line) - 1] == '\n')
			return (line);
		if (read(fd, buffer[fd], BUFFER_SIZE) < 0)
			return (free(line), NULL);
	}
	return (line);
}
/* int main(void)
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
} */
/* int main(void)
{
	char	*line;
	line = get_next_line(1);
	printf("return:%s", line);
	free(line);
	return(0);
} */