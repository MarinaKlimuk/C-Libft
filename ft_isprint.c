/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 12:39:59 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 12:39:59 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isprint(char symbol);

// int	main(void)
// {
// 	char	symbol;

// 	symbol = 'c';
// 	printf("1 Type of the symbol: %d \n", ft_isprint(symbol));

// 	symbol = 'Y';
// 	printf("2 Type of the symbol: %d\n", ft_isprint(symbol));

// 	symbol = '4';
// 	printf("3 Type of the symbol: %d\n", ft_isprint(symbol));

// 	symbol = '-';
// 	printf("4 Type of the symbol: %d\n", ft_isprint(symbol));

// 	return (0);
// }

int	ft_isprint(int symbol)
{
	if (symbol >= 32 && symbol <= 126)
		return (1);
	return (0);
}
