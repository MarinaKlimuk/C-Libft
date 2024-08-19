/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 13:18:24 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 13:18:24 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char s1[] = "Heelo world";
// 	char s2[] = "Hellow ";
// 	unsigned int	n;
// 	int	a;

// 	n = 7;
// 	a = ft_strncmp(s1, s2, n);
// 	printf("%d", a);
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
