/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 14:04:15 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-24 14:04:15 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);
// int	main(void)
// {
// 	const	char original[] = "Hello world!";
// 	char	*duplicate;

// 	duplicate = ft_strdup(original);

// 	if (duplicate != NULL)
// 	{
// 		printf("Result: %s", duplicate);
// 	}
// 	else
// 	{
// 		printf("Failed");
// 	}
// 	free (duplicate);
// 	return (0);
// }

char	*ft_strdup(const char *s)
{
	int		s_size;
	int		i;
	char	*str;

	s_size = ft_strlen(s);
	i = 0;
	str = (char *) malloc (sizeof (*str) * (s_size + 1));
	if (str == NULL)
		return (NULL);
	while (i < s_size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
