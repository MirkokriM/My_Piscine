/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:06:43 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/31 12:07:03 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_size;

	i = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (str);
	find_size -= 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == find_size)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
