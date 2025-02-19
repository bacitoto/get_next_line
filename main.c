/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:31:25 by fde-mato          #+#    #+#             */
/*   Updated: 2025/02/19 15:13:37 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>



int	main(void)
{
	int		fd = open("sometext.txt", O_RDONLY);
	char	*buf;
	int		chars_read;

	if (fd < 0)
	{
		return (printf("open error \n"));
		return (1);
	}
	
	while(get_next_line != '\0')
	{
		buf = get_next_line(fd);
		printf("s, \n", buf);
		free (buff);

	}

	close(fd);
	return(0);
}

//FOPEN syntax
/* int main(void)
{
	FILE    *file_to_read = fopen("sometext.txt, "r");
	FILE    *file_to_write = fopen("newtext.txt, "w");

	if (file_to_read == NULL || file_to_write == NULL)
		printf("one file woudln't open-> doesn't exist or it´s null \n")
	char *get_next_line(int fd)
} */