/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:56:42 by mivendit          #+#    #+#             */
/*   Updated: 2022/11/02 15:56:48 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	ptr = malloc((max - min) * sizeof(*ptr));
	if (ptr != NULL)
	{
		while (min < max)
		{
			ptr[i] = min;
			min++;
			i++;
		}
	}
	else
		return (-1);
	*range = ptr;
	return (i);
}
