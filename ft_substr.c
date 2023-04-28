/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:29:17 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/28 15:39:06 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief it allocates memory for and returns a substring from string str. 
 * 
 * @param str starting string
 * @param start index from which substring will start
 * @param len max length of the substring

 * 		ft_strlen() is used to return an empty string when start is beyond end.
 * 		The length of the substring is calculated by taking the minimum of len
 * 		and the difference between the length of str and start.
 */
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;
	char	*substr;

	str_len = ft_strlen(str);
	substr_len = len;
	if (start >= str_len)
		return (ft_strdup(""));
	if ((str_len - start) < len)
		substr_len = str_len - start;
	substr = malloc((substr_len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, str + start, substr_len + 1);
	return (substr);
}
