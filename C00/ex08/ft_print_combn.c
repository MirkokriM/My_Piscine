/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:13:55 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/18 12:13:58 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	evaluate_comb(int *table, int size)
{
	int	index;
	int	grow;

	index = 1;
	grow = 1;
	while (index < size)
	{
		if (table[index - 1] >= table[index])
			grow = 0;
		index++;
	}
	if (grow)
	{
		index = 0;
		while (index < size)
			ft_putchar(table[index++] + 48);
		if (table[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
