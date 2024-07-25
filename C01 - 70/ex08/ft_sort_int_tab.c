/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:57:51 by hadalici          #+#    #+#             */
/*   Updated: 2024/07/07 04:41:41 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swp;

	a = 0;
	while (size > 1)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				swp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = swp;
			}
			a++;
		}
		size--;
	}
}
