/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:50:11 by hadalici          #+#    #+#             */
/*   Updated: 2024/07/20 17:33:04 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*a;

	a = malloc(sizeof(strs));
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			a[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			a[x++] = sep[j++];
		}
		i++;
	}
	a[x] = '\0';
	return (a);
}
