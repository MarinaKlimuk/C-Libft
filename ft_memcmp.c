/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 14:19:34 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 14:19:34 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int	main(void)
// {
// 	const char s1[] = "Hello world";
// 	const char s2[] = "Hi";
// 	size_t n = 4;
// 	int r = ft_memcmp(s1,s2,n);
// 	printf ("Result: %d", r);
// 	return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
