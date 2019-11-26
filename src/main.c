/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelazzou <oelazzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:52:28 by sberrich          #+#    #+#             */
/*   Updated: 2019/11/12 21:32:47 by oelazzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		ft_error("Usage : ./fdf <filename>");
	ft_check(av[1], &data);
	data.mlx_ptr = mlx_init();
	data.win_ptr = mlx_new_window(data.mlx_ptr, H, V, "FDF");
	mlx_hook(data.win_ptr, 2, 0, &key_press, &data);
	show_menu(&data);
	mlx_loop(data.mlx_ptr);
	return (0);
}
