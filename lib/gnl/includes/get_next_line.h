/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 00:20:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 15:04:07 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ########################################################################## */
/* CONFIG */
/* ###### */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0x100
# endif
# ifndef MAX_FD
#  define MAX_FD 0x400
# endif

/* ########################################################################## */

/* ########################################################################## */
/* LIBRARY */
/* ####### */

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// get_next_line.c
char	*ft_line(char *buf);
char	*ft_read(int fd, char *buf);
char	*ft_stash(char *s);
char	*get_next_line(int fd);

// get_next_line_utils.c
char	*ft__memchr(char *buf, unsigned char c);
char	*ft__memjoin(char *s1, char *s2);
size_t	ft__strlen(char *s);

/* ########################################################################## */

#endif
