/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 12:57:18 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-22 12:57:18 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memset(void *ptr, int value, size_t num);

// int	main(void)
// {
// 	char	string[50];
// 	ft_memset(string, '0', 30);
// 	printf("String after ft_memset: %s\n",string);
// 	return (0);
// }

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*s;

	s = (char *)ptr;
	while (num > 0)
	{
		s[num - 1] = value;
		num--;
	}
	return (ptr);
}
