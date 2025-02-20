/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/02/20 14:53:33 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 10

char	*get_next_line(int fd)

{
	size_t			nbyte;
	static int		x;
	char			tmp;
	static *char	buffered;
	
	x = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	while (read nbyte-in-nbyte loop stops when \n is found)
	{
		read(fd, buf, BUFFER_SIZE);
		line = strjoin(line, buf);
		if (linelen)
		//x += read(fd, tmp, nbyte)
		buffered += strlcat todos os tmp;
		if ()
	}
	size_t	ft_strlcat(line, char const *tmp, size_t ft_linelen(line))

	ft_linelen(buffed);
	return(buff_ate_\n);
}

read(fd,buffer, BUFFER_SIZE)
line = func() -> concatena buffer para line, at'e ao linelen
limpar buffer