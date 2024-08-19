/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 12:08:42 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 12:08:42 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_toupper(int c);

// int	main(void)
// {
// 	char	a;

// 	a = 'a';
// 	a = ft_toupper(a);
// 	printf("Result: %c",a);
// 	return (0);
// }

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
