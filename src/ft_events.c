/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:10:21 by makoch-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:10:32 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	handle_key(int key, t_fdf *fdf)
{
	if (key == KEY_ESC)
		close_window(fdf);
	return (0);
}

int	close_window(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx, fdf->win);
	exit(0);
}
