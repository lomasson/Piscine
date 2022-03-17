/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:27:26 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/19 11:27:14 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (str)
	{
		while (str[i])
		{
			if (str[i] >= 97 && str[i] <= 122)
				a = 1;
			else
			{	
				a = 0;
				break ;
			}
			i++;
		}
	}
	return (a);
}
