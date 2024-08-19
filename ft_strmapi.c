/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-28 15:11:22 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-28 15:11:22 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// char	ft_change_to (unsigned int i, char c);

// int	main(void)
// {
// 	const char	*s = "hello";
// 	char	*result;

// 	result = ft_strmapi(s, ft_change_to);
// 	printf("Result: %s", result);
// 	return (0);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	i = 0;
	result = (char *) malloc ((len_s + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	ft_change_to(unsigned int i, char c)
// {
// 	(void)i;
// 	return (char)ft_toupper((int)c);
// }
