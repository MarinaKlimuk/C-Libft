/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 09:33:48 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 09:33:48 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n);

// int	main(void)
// {
// 	char	src[3] = "hi";
// 	char	dest[3];

// 	ft_memcpy(dest, src, 1);
// 	printf("Result dest: %s\n", dest);

// 	return (0);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	i = 0;
	source = (char *)src;
	destination = (char *)dest;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
