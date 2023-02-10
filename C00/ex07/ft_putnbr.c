/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:13:38 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/18 12:13:40 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	temp_number;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp_number = nb;
	while (temp_number > 10)
	{
		size *= 10;
		temp_number /= 10;
	}
	temp_number = nb;
	while (size)
	{
		ft_putchar((char)((temp_number / size)) + 48);
		temp_number %= size;
		size /= 10;
	}
}
