
#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

//# define BUFFER_SIZE 32

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int 	get_next_line(int fd, char **line);

#endif