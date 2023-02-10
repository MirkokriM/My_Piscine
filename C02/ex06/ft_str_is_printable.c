/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:46:06 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/22 15:47:58 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 1;
		if ((32 <= str[i]) && (str[i] <= 126))
			alpha = 0;
		if (alpha)
			return (0);
		i++;
	}
	return (1);
}
