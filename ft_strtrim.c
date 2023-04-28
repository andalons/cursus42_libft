/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:25:16 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/28 15:41:02 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief it takes the characters in the string 'set', and removes them 
 * from 's' (from the beginning and from the end) until it finds one that is
 * not present in 'set'. The resulting string is allocated and returned. 
 * 
 * @param s the string that will be trimmed
 * @param set the characters that must be removed 
 * 
 * 		ft_char_in_set() is used to find the start and end positions of the 
 * 		non-set characters in the string.
 */
static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_char_in_set(s[start], set))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_char_in_set(s[end - 1], set))
		end--;
	len = end - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	str[len] = '\0';
	return (str);
}
