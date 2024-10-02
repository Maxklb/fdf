/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:07:52 by makoch-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:38:48 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static void	fill_map(char *line, t_fdf *fdf, int row)
{
	char	**values;
	int		col;

	col = 0;
	values = ft_split(line, ' ');
	while (values[col])
	{
		fdf->map[row][col].z = ft_atoi(values[col]);
		fdf->map[row][col].x = col;
		fdf->map[row][col].y = row;
		free(values[col]);
		col++;
	}
	free(values);
}

static int	count_columns(char *line)
{
	int		count;
	char	**values;

	count = 0;
	values = ft_split(line, ' ');
	while (values[count])
	{
		free(values[count]);
		count++;
	}
	free(values);
	return (count);
}

static int	count_rows(char *file)
{
	int		fd;
	int		rows;
	char	*line;

	rows = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error("Error: Could not open file");
	while ((line = get_next_line(fd)))
	{
		rows++;
		free(line);
	}
	close(fd);
	return (rows);
}

void	parse_map(char *file, t_fdf *fdf)
{
	int		fd;
	int		row;
	char	*line;

	fdf->map_height = count_rows(file);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error("Error: Could not open file");
	fdf->map = malloc(sizeof(t_point *) * fdf->map_height);
	if (!fdf->map)
		ft_error("Error: Memory allocation failed");
	row = 0;
	while ((line = get_next_line(fd)))
	{
		if (row == 0)
			fdf->map_width = count_columns(line);
		fdf->map[row] = malloc(sizeof(t_point) * fdf->map_width);
		if (!fdf->map[row])
			ft_error("Error: Memory allocation failed");
		fill_map(line, fdf, row);
		free(line);
		row++;
	}
	close(fd);
}
