/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:45:10 by makoch-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:10:09 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

t_fdf	*init_fdf(void)
{
	t_fdf	*fdf;

	fdf = malloc(sizeof(t_fdf));
	if (!fdf)
		ft_error("Error: Memory allocation failed");
	fdf->mlx = mlx_init();
	fdf->win = mlx_new_window(fdf->mlx, WIDTH, HEIGHT, "FDF");
	return (fdf);
}
