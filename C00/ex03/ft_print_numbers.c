/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:10:35 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/18 12:10:40 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	alpha;
	int		i;

	alpha = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &alpha, 1);
		i++;
		alpha++;
	}
}
