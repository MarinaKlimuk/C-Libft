/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 12:26:20 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 12:26:20 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_tolower(int c);

// int	main(void)
// {
// 	char	a;

// 	a = 'a';
// 	a = ft_tolower(a);
// 	printf("Result: %c",a);
// 	return (0);
// }

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
