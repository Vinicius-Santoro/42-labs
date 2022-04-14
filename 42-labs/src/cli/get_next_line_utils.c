/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:15:13 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/24 15:37:53 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *string, int character)
{
	unsigned char	character_aux;

	character_aux = (unsigned char) character;
	while (*string != '\0' && character_aux != *string)
		string++;
	if (character_aux == *string)
		return ((char *)string);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == NULL || s2 == NULL || new_string == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			new_string[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_string[i] = s2[j];
			i++;
			j++;
		}
		new_string[i] = '\0';
	}
	return (new_string);
}

size_t	ft_strlcpy(char *destiny, const char *source, size_t destiny_size)
{
	size_t	source_size;
	size_t	index;

	if ((destiny || source) == 0)
		return (0);
	source_size = ft_strlen(source);
	index = 0;
	if (destiny_size > 0)
	{
		while (source[index] != '\0' && index < (destiny_size - 1))
		{
			destiny[index] = source[index];
			index++;
		}
		destiny[index] = '\0';
	}
	return (source_size);
}

char	*ft_strdup(char *string)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc (sizeof(char) * (ft_strlen(string) + 1));
	if (str == NULL)
		return (NULL);
	while (string[i])
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
