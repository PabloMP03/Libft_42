/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmunoz-p <pmunoz-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:44:51 by pmunoz-p          #+#    #+#             */
/*   Updated: 2024/06/05 12:55:35 by pmunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
