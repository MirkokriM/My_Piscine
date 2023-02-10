/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:38:05 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/31 13:11:33 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 1;
		if (('0' <= str[i]) && (str[i] <= '9'))
			alpha = 0;
		if (alpha)
			return (0);
		i++;
	}
	return (1);
}
