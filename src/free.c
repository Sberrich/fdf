/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberrich <sberrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 16:12:47 by oelazzou          #+#    #+#             */
/*   Updated: 2019/11/11 18:22:01 by sberrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	free_twod(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		ft_strdel(&arr[i]);
		i++;
	}
	free(arr);
}
