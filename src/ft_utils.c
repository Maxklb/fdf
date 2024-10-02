/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:07:30 by makoch-l          #+#    #+#             */
/*   Updated: 2024/10/02 15:26:56 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	get_color(t_point start, t_point end)
{
	return (0xFFFFFF);
}

void	free_fdf(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx, fdf->win);
	free(fdf);
}
