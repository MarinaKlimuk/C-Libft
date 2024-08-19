/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 10:53:35 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 10:53:35 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlcpy(char *dest, const char *src, size_t size);

// int	main(void)
// {
// 	char		dest[30];
// 	const char	*src = "Hello world!";
// 	size_t		len;

// 	len = ft_strlcpy(dest, src, 30);
// 	printf("Result dest: %s\n", dest);
// 	printf("length of src: %zu\n", len);
// 	return (0);
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
