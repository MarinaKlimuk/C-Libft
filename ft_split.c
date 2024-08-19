/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-28 13:31:35 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-28 13:31:35 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

// int	main(void)
// {
// 	const char	*s = "Hello, world";
// 	char	**result;

// 	result = ft_split(s, ',');
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}

// 	printf("Result:\n");
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("%s\n", result[i]);
// 	}
// 	return (0);
// }

int	ft_countwords(const char *s, char c)
{
	int	i;
	int	word_counter;

	i = 0;
	word_counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (word_counter);
		}
		else
		{
			i++;
		}
	}
	return (word_counter);
}

void	ft_cpy(char *word, const char *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] != '\0' && s[j] == c)
		j++;
	while (s[i + j] != c && s[i + j] != '\0')
	{
		word[i] = s[i + j];
		i++;
	}
	word[i] = '\0';
}

char	*ft_wordsalloc(const char *s, char c, int *pos)
{
	char	*word;
	int		start;
	int		len;

	while (s[*pos] == c && s[*pos] != '\0')
		(*pos)++;
	start = *pos;
	len = 0;
	while (s[*pos] != c && s[*pos] != '\0')
	{
		(*pos)++;
		len++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_cpy(word, s, c, start);
	return (word);
}

void	ft_free(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		words_num;
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	if (s == NULL)
		return (NULL);
	words_num = ft_countwords(s, c);
	words = (char **)malloc((words_num + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (i < words_num)
	{
		words[i] = ft_wordsalloc(s, c, &pos);
		if (words[i] == NULL)
		{
			ft_free(words, i);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}
