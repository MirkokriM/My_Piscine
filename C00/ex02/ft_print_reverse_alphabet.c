/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:10:14 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/18 12:10:27 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;
	int		i;

	alpha = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &alpha, 1);
		i++;
		alpha--;
	}
}
