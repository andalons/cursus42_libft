/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:08:45 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 12:48:54 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It allocates an array of strings that is result of separating the
 * string 's' in substrings using 'c' as delimiter. The array must end with 
 * a NULL pointer. The return value will be an array of the resulting strings
 * or NULL if allocation failed.
 * 
 * @param s a string to be separated
 * @param c a character used as delimiter
 * 
 * 		Helper functions:
 * 		ft_count_words: returns the number of substrings.
 * 		ft_fill_result: fills the result array with the extracted substrings.
 *		ft_extract_word: extracts and allocates delimitted substring. 
 * 		ft_free_array: it frees memory allocated for strings and for the array.
 */
static void	ft_free_array(char **array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*ft_extract_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	ft_fill_result(char **result, char const *s, char c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		result[i] = ft_extract_word(s, c);
		if (!result[i])
		{
			ft_free_array(result, i);
			return ;
		}
		s += ft_strlen(result[i]);
		i++;
	}
	result[count] = NULL;
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_fill_result(result, s, c, count);
	return (result);
}
