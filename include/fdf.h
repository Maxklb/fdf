/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:16:02 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/27 14:22:32 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include "../minilibx-linux/mlx.h"
#include "../libft/libft.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <fcntl.h>

#include "colors.h"

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