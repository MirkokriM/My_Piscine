/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:44:50 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/31 12:51:43 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 1;
		if (('A' <= str[i]) && (str[i] <= 'Z'))
			alpha = 0;
		if (alpha)
			return (0);
		i++;
	}
	return (1);
}
