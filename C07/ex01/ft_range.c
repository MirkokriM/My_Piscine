/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:56:19 by mivendit          #+#    #+#             */
/*   Updated: 2022/11/02 15:56:22 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = malloc((max - min) * sizeof(*range));
	if (range != NULL)
	{
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
