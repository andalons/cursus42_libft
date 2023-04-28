/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:26:04 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 12:51:36 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It compares 2 null-terminating strings for n characters.
 * The comparison is done using unsigned characters.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str1[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < n))
	{
		diff = (unsigned char)str1[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = (unsigned char)str1[i] - (unsigned char)str2[i];
	return (diff);
}
