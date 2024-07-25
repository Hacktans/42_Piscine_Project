/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:42:33 by hadalici          #+#    #+#             */
/*   Updated: 2024/07/07 04:38:48 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swp;

	a = 0;
	while (a <= size / 2)
	{
		swp = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = swp;
		a++;
		size--;
	}
}
