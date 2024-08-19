/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 12:20:59 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 12:20:59 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isascii(int symbol);

// int	main(void)
// {
// 	char	symbol;

// 	symbol = 'c';
// 	printf("1 Type of the symbol: %d \n", ft_isascii(symbol));

// 	symbol = 'Y';
// 	printf("2 Type of the symbol: %d\n", ft_isascii(symbol));

// 	symbol = '4';
// 	printf("3 Type of the symbol: %d\n", ft_isascii(symbol));

// 	return (0);
// }

int	ft_isascii(int symbol)
{
	if (symbol >= 0 && symbol <= 127)
	{
		return (1);
	}
	return (0);
}
