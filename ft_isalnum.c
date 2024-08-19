/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 11:44:47 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 11:44:47 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isalnum(int symbol);

// int	main(void)
// {
// 	char	symbol;

// 	symbol = 'c';
// 	printf("1 Type of the symbol: %d \n", ft_isalnum(symbol));

// 	symbol = 'Y';
// 	printf("2 Type of the symbol: %d\n", ft_isalnum(symbol));

// 	symbol = '4';
// 	printf("3 Type of the symbol: %d\n", ft_isalnum(symbol));

// 	symbol = '-';
// 	printf("4 Type of the symbol: %d\n", ft_isalnum(symbol));

// 	return (0);
// }

int	ft_isalnum(int symbol)
{
	if ((symbol < '0' || symbol > '9')
		&& ((symbol < 'A' || symbol > 'Z') && (symbol < 'a' || symbol > 'z')))
	{
		return (0);
	}
	return (1);
}
