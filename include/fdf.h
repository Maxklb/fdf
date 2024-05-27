/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:16:02 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/27 21:39:58 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include<stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>

# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"
# include "colors.h"
# include "error.h"

typedef enum s_key {
	LEFT_CLICK = 1,
	RIGHT_CLICK = 2,
	MIDDLE_CLICK = 3,
	SCROLL_UP = 4,
	SCROLL_DOWN = 5,
	SPACE = 32,
	MINUS = 45,
	PLUS = 61,
	A = 97,
	D = 100,
	S = 115,
	W = 119,
	ESC = 65307,
	LEFT = 65361,
	UP = 65362,
	RIGHT = 65363,
	DOWN = 65364,
}			t_key;

typedef struct s_map {
	void	*mlx_ptr;
	void	*win_ptr;
	char	*addr;
	void	*img;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_map;

#endif