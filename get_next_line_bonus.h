/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:42:40 by bemmanue          #+#    #+#             */
/*   Updated: 2021/06/26 17:42:44 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

int		get_next_line(int fd, char **line);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
