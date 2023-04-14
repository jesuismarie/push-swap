/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:01:17 by mnazarya          #+#    #+#             */
/*   Updated: 2023/01/22 14:01:17 by mnazarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	// printf ("%s\n", s);
	if (!s)
		return (0);
	while (*s && *s != b)
		s++;
	if (*s == b)
		return ((char *)s);
	return (0);
}
