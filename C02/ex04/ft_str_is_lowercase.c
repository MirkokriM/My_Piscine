/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:44:31 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/22 15:44:40 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 1;
		if (('a' <= str[i]) && (str[i] <= 'z'))
			alpha = 0;
		if (alpha)
			return (0);
		i++;
	}
	return (1);
}
