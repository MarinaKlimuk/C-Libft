/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 09:54:41 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 09:54:41 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isalpha(int symbol);

// int	main(void)
// {
// 	char	symbol;

// 	symbol = 'c';
// 	printf("1 Type of the symbol: %d \n", ft_isalpha(symbol));

// 	symbol = 'Y';
// 	printf("2 Type of the symbol: %d\n", ft_isalpha(symbol));

// 	symbol = '4';
// 	printf("3 Type of the symbol: %d\n", ft_isalpha(symbol));

// 	symbol = '-';
// 	printf("4 Type of the symbol: %d\n", ft_isalpha(symbol));

// 	return (0);
// }

int	ft_isalpha(int symbol)
{
	if ((symbol < 'A' || symbol > 'Z') && (symbol < 'a' || symbol > 'z'))
	{
		return (0);
	}
	return (1);
}
