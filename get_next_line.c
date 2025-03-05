/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/05 20:32:59 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (read(fd, buffer, BUFFER_SIZE) < 0)
			return (NULL);
	while(buffer)
	{
		line = ft_strjoin(line, buffer);
		if(ft_cleanbuf_gnl(buffer) == 1)
			break ;
		if (read(fd, buffer, BUFFER_SIZE) < 0)
			return (free(line), NULL);
	}
	return(line);
}
int	main(void)
{
	int		fd = open("pseudo.txt", O_RDONLY);
	char	*str = get_next_line(fd);
	size_t i = 1;

	while(str)
	{
		str = get_next_line(fd);
		printf("line%lu=%s",i , str);
		i++;
		free(str);
		str = get_next_line(fd);
	}

	close(fd);
	return(0);
}