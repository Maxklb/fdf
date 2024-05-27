/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:15:34 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/27 14:45:48 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void my_mlx_pixel_put(t_map *map, int x, int y, int color)
{
  char *dst;

  dst = map->addr + y * map->line_length + x * (map->bits_per_pixel / 8);
  *(unsigned int *)dst = color;
}

int	main(void)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (0);

	map->mlx_ptr = mlx_init();
	map->win_ptr = mlx_new_window(map->mlx_ptr, 300, 300, "fdf");
	
	map->img = mlx_new_image(map->mlx_ptr, 300, 300);
	
	map->addr = mlx_get_data_addr(map->img, &map->bits_per_pixel, &map->line_length, &map->endian);

	my_mlx_pixel_put(map, 150, 150, 0x00FF0000);
	my_mlx_pixel_put(map, 151, 150, 0x00FF0000);
	my_mlx_pixel_put(map, 152, 150, 0x00FF0000);
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr, &map->img, 0, 0);
	
	mlx_loop(map->mlx_ptr);
}