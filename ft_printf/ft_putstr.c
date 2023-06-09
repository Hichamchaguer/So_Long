/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:11:11 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:27:00 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	if (c == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	return (i);
}
