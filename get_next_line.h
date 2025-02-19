/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-mato <fde-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:53:55 by fde-mato          #+#    #+#             */
/*   Updated: 2025/02/19 16:19:11 by fde-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_linelen(const char *str);
size_t	ft_strlcat(char *dest, char const *src, size_t size);

#endif