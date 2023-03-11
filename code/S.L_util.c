/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S.L_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:28:01 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/10 23:07:18 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_collectible(char **line)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (line[i])
	{
		j = 0;
		while (line[i][j])
		{
			if (line[i][j] == 'C')
				counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

void	ft_exit(t_index *all)
{
	if ((all->split[all->i + 1][all->j] == 'E'
		|| all->split[all->i][all->j + 1] == 'E'
		|| all->split[all->i - 1][all->j] == 'E'
		|| all->split[all->i][all->j - 1] == 'E') && all->count == 0)
	{
		ft_printf("\033[0;32m\nYOU WON !!!\n");
		exit(0);
	}
}

void	check_img(t_index *all)
{
	if (all->imgs.img_0 == NULL
		|| all->imgs.img_1 == NULL
		|| all->imgs.img_c == NULL
		|| all->imgs.img_e == NULL
		|| all->imgs.img_p == NULL)
		exit(1);
}

void	last_line(char *join)
{
	int	i;

	i = 0;
	while (join[i])
		i++;
	i = i - 1;
	if (join[i] == '\n')
	{
		ft_printf("Error line empty\n");
		exit(1);
	}
}
