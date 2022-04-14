/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:15:15 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/24 15:37:56 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

static char	*make_backup(int fd, char *backup, char *buffer);
static char	*make_line(char *backup);
static char	*get_final(char *backup);

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*backup;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	backup = make_backup(fd, backup, buffer);
	if (backup == NULL)
		return (NULL);
	line = make_line(backup);
	backup = get_final(backup);
	return (line);
}

static char	*make_backup(int fd, char *backup, char *buffer)
{
	int		read_bytes;
	int		auxiliary;
	char	*temporary;

	read_bytes = 1;
	auxiliary = 0;
	while (auxiliary == 0 && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		if (backup == NULL)
			backup = ft_strdup("");
		temporary = backup;
		backup = ft_strjoin(temporary, buffer);
		free(temporary);
		if (ft_strchr(backup, '\n') != NULL)
			auxiliary = 1;
	}
	free(buffer);
	return (backup);
}

static char	*make_line(char *backup)
{
	int		i;
	char	*line;

	i = 0;
	while (backup[i] != '\0' && backup[i] != '\n')
		i++;
	line = (char *) malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	ft_strlcpy(line, backup, i + 2);
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

char	*get_final(char *backup)
{
	int		i;
	char	*newbackup;

	i = 0;
	while (backup[i] != '\0' && backup[i] != '\n')
		i++;
	if (backup[i] == '\0')
	{
		free(backup);
		return (NULL);
	}
	newbackup = (char *)malloc(sizeof(char) * (ft_strlen(backup) - i + 1));
	if (newbackup == NULL)
		return (NULL);
	ft_strlcpy(newbackup, backup + i + 1, ft_strlen(backup) - i + 1);
	free(backup);
	return (newbackup);
}
