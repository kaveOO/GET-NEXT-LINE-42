/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 01:53:11 by albillie          #+#    #+#             */
/*   Updated: 2024/11/09 19:19:35 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	buffer = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line_buffer(fd, buffer);
	return (line);
}

char	*fill_line_buffer(int fd, char *buffer)
{
	ssize_t	b_read;

	b_read = 0;
	while (b_read == read(fd, buffer, BUFFER_SIZE))
	{
		if (buffer[b_read] == '\0' || buffer[b_read] == '\n')
		{
			printf(b_read);
		}
	}
	return (buffer);
}



/* char	*set_line(int fd, char *buffer)
{
	size_t	i;

	buffer = NULL;
	while (read(fd, buffer[i], BUFFER_SIZE) != '\n')
	{
		i++;
	}
	return (buffer);
} */

int main()
{
	char	*buffer;
	int fd = open("test.txt", O_RDONLY);

	set_line(fd, buffer);
}




char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == cc)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
