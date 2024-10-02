/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:15:09 by makoch-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:15:18 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	draw_line(t_fdf *fdf, t_point start, t_point end)
{
	int	dx;
	int	dy;
	int	steps;

	dx = abs(end.x - start.x);
	dy = abs(end.y - start.y);
	steps = dx > dy ? dx : dy;
	while (steps--)
	{
		mlx_pixel_put(fdf->mlx, fdf->win, start.x, start.y, get_color(start, end));
		start.x += dx / steps;
		start.y += dy / steps;
	}
}
