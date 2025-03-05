/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:25:17 by fde-mato          #+#    #+#             */
/*   Updated: 2025/03/04 19:18:23 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 10

char	*get_next_line(int fd)

{
	size_t		nbyte;
	static int	index;
	char		*line;
	char		*buff	
	static char	*statstr;
	
	index = 0;
	line = NULL;
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof (char))
	if (!buff)
		return(NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	READ
	if (read <= 0)
		break;
	else (read > 0)
	{
		
	}
	line = ft_strjoin(line, buff);
	
	if (line = ft_linelen(statstr) <= 0)
	{
			return(statstr)
			free (statstr)
	}
	else
	{
		line
	}		
	
		return(NULL);
	while (read nbyte-in-nbyte loop stops when \n is found)
	{
		read(fd, statstr, BUFFER_SIZE);
		line = strjoin(line, statstr);
		if (ft_linelen)ft_readfile
		if ()
	}
	//size_t	ft_strlcat(line, char const *tmp, size_t ft_linelen(line))

	ft_linelen(buffed);
	return(buff_ate_\n);
}

read(fd,buffer, BUFFER_SIZE)
line = strljoin() -> concatena buffer para line, at'e ao linelen
limpar buffer