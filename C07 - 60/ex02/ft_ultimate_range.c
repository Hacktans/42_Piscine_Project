/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:50:24 by hadalici          #+#    #+#             */
/*   Updated: 2024/07/20 17:31:40 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = max - min;
	d = ((int *)malloc(c * sizeof(int)));
	if (d == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < c)
	{
		d[i] = min + i;
		i++;
	}
	*range = d;
	return (c);
}
