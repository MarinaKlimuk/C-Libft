/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 11:23:02 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 11:23:02 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isdigit(int symbol);

// int	main(void)
// {
// 	char	symbol;

// 	symbol = 'c';
// 	printf("1 Type of the symbol: %d \n", ft_isdigit(symbol));

// 	symbol = 'Y';
// 	printf("2 Type of the symbol: %d\n", ft_isdigit(symbol));

// 	symbol = '4';
// 	printf("3 Type of the symbol: %d\n", ft_isdigit(symbol));

// 	symbol = '-';
// 	printf("4 Type of the symbol: %d\n", ft_isdigit(symbol));

// 	return (0);
// }

int	ft_isdigit(int symbol)
{
	if (symbol < '0' || symbol > '9')
	{
		return (0);
	}
	return (1);
}
