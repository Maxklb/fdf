/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:15:34 by makoch-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:07:09 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	main(int argc, char **argv)
{
	t_fdf	*fdf;

	if (argc != 2)
		ft_error("Usage: ./fdf <map_file>");
	fdf = init_fdf();
	parse_map(argv[1], fdf);
	mlx_key_hook(fdf->win, handle_key, fdf);
	mlx_loop(fdf->mlx);
	free_fdf(fdf);
	return (0);
}
