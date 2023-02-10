/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivendit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:49:22 by mivendit          #+#    #+#             */
/*   Updated: 2022/10/22 15:49:42 by mivendit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_alphanum(char c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	if (('A' <= c) && (c <= 'Z'))
		return (1);
	if (('a' <= c) && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	alpha;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i]) && (str[i] <= 'z') && !(word))
			str[i] = str[i] - 32;
		if (('A' <= str[i]) && (str[i] <= 'Z') && word)
			str[i] = str[i] + 32;
		alpha = 0;
		if (!(is_alphanum(str[i])))
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
