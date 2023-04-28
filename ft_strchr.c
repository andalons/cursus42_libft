/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:57 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/25 17:40:50 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It locates and returns a pointer to the first ocurrence of c 
 * in the string pointed by str.
 */
char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != (char)c)
	{
		str++;
	}
	if (*str == (char)c)
		return ((char *) str);
	else
		return (NULL);
}
