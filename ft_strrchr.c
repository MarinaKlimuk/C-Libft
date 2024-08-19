/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 13:10:41 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 13:10:41 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c);

// int	main(void)
// {
// 	char	string[] = "Hello world";
// 	char	*r;

// 	r = ft_strrchr(string, 'o');
// 	printf("Result: %s", r);
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
