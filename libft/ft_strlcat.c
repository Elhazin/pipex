/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:00:37 by abouzanb          #+#    #+#             */
/*   Updated: 2022/10/29 02:01:23 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	old_value;

	if (size == 0)
		return (ft_strlen(src));
	y = ft_strlen(dest);
	old_value = y;
	x = 0;
	if (y > size)
		return (size + ft_strlen(src));
	while (src[x] != '\0' && y < (size -1))
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (ft_strlen(src) + old_value);
}
