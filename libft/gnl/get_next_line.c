/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:53:10 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/17 16:53:20 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*fill_line(char *tmp)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1) + 1);
	if (!line)
		return (NULL);
	while (j <= i)
	{
		line[j] = tmp[j];
		j++;
	}
	line[j] = '\0';
	free(tmp);
	return (line);
}

void	shift_stash(char *stash)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		stash[0] = '\0';
		return ;
	}
	while (stash[i + j])
	{
		stash[j] = stash[i + j + 1];
		j++;
	}
	stash[j] = '\0';
	return ;
}

char	*read_fd(char *stash, int fd)
{
	int		i;
	char	*tmp;

	tmp = ft_strdup(stash);
	while (!ft_strchr(tmp, '\n'))
	{
		i = read(fd, stash, BUFFER_SIZE);
		if (i <= 0)
			return (tmp);
		stash[i] = '\0';
		tmp = ft_strjoin(tmp, stash);
	}
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	stash[BUFFER_SIZE + 1] = {'\0'};
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	tmp = read_fd(stash, fd);
	if (!stash[0])
	{
		free(tmp);
		return (NULL);
	}
	line = fill_line(tmp);
	shift_stash(stash);
	return (line);
}