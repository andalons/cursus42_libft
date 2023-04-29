/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:29:17 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/29 11:44:29 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief it allocates memory for and returns a substring from string str. 
 * 
 * @param str starting string
 * @param start index from which substring will start
 * @param len max length of the substring
 * 
 * 		ft_strdup() is used to return an empty string when start is beyond end.
 */
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*substr;

	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	if ((str_len - start) < len)
		len = str_len - start;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
