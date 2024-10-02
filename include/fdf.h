/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:16:02 by makoch-l          #+#    #+#             */
/*   Updated: 2024/10/02 15:28:57 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

// Includes
# include<stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>

# include "../minilibx-linux/mlx.h"
# include "../minilibx-mac-osx/mlx.h"
# include "../libft/libft.h"
# include "colors.h"

// Macros
# define WIDTH 1000
# define HEIGHT 800
# define KEY_ESC 53

// Structure definitions
typedef struct s_point
{
	int	x;
	int	y;
	int	z;
}	t_point;

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
	t_point	**map;
	int		map_width;
	int		map_height;
}	t_fdf;

// Function prototypes
void	draw_line(t_fdf *fdf, t_point start, t_point end);
void	parse_map(char *file, t_fdf *fdf);
void	ft_error(char *message);
int		handle_key(int key, t_fdf *fdf);
int		close_window(t_fdf *fdf);
t_fdf	*init_fdf(void);
int		get_color(t_point start, t_point end);
void	free_fdf(t_fdf *fdf);

#endif