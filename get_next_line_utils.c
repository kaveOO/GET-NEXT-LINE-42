/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:26:00 by albillie          #+#    #+#             */
/*   Updated: 2024/10/28 06:49:29 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	size_t	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(s1_len + s2_len + 1);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	printf("%ld\n", i);
	return (result);
}

int main()
{
	char *string;
	char *string1;

	string = "j'adore les chats";
	string1 = "j'adore les chats";

	printf("%s\n", ft_strjoin(string, string1));
}
