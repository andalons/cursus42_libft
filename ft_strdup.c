/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:05:59 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/25 18:42:27 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief it allocates sufficient memory for a copy of a string, does the copy
 * and it returns a pointer to it, which may be later used as an argument to
 * free memory.
 */
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + 1;
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	return (str);
}
