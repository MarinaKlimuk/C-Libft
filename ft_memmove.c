/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 10:10:29 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 10:10:29 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n);

// int	main(void)
// {
// 	char	src[30] = "This is a long string.";
// 	char	dest[5];

// 	ft_memmove(dest, src, 5);
// 	printf("Result dest: %s\n", dest);
// 	return (0);cs
// }

// The  memmove() function copies n bytes
// from memory area src to memory area dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (destination < source)
	{
		while (n--)
		{
			*destination++ = *source++;
		}
	}
	else if (destination > source)
	{
		destination += n;
		source += n;
		while (n--)
		{
			*(--destination) = *(--source);
		}
	}
	return (dest);
}
