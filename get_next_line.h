/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:26:45 by kalshaer          #+#    #+#             */
/*   Updated: 2022/08/18 14:28:01 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 90
#endif

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c, size_t i);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
void	*ft_calloc(size_t count, size_t size);
char	*read_buff (int fd, char *r);
char	*toprint(char *p);
char	*lft(char *r);
char	*get_next_line(int fd);


#endif