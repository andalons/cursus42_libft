/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:23:39 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/25 17:10:07 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Printing character test (space character inclusive).
 * It tests for any printing character, including space (` ').
 */
int	ft_isprint(int c)
{
	if ((c >= 32 && c < 127))
		return (1);
	else
		return (0);
}
