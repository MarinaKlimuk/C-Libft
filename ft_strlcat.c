/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 11:52:26 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 11:52:26 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size);

// int	main (void)
// {
// 	char	src[] = ", world!";
// 	char	dest[] = "Hello";
// 	unsigned int	size;
// 	unsigned int	new_size;

// 	size = 10;
// 	printf("Before: %s\n", dest);
// 	new_size = ft_strlcat(dest, src, size);
// 	printf("After: %s\n", dest);
// 	printf("Size: %d\n", new_size);
// 	return (0);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
