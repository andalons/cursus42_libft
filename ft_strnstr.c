/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:44:53 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 12:51:55 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It searches for the first occurrence of the string needle 
 * in the string haystack. The search is limited to len characters.
 * 
 * @param haystack a pointer to the string in which it searchs
 * @param needle a pointer to the string it searches for 
 * @param len a size_t to limit the search to a max of characters.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	size_t		i;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len-- >= needle_len)
	{
		i = 0;
		while (i < needle_len && haystack[i] == needle[i])
			i++;
		if (i == needle_len)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
