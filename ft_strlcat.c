/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 15:39:01 by nsterk        #+#    #+#                 */
/*   Updated: 2020/11/12 21:22:52 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t rlen;
	size_t maxlen;

	i = ft_strnlen(dst, size);
	if (i < size)
		rlen = i + ft_strlen((char *)src);
	else
		rlen = size + ft_strlen((char *)src);
	j = 0;
	if (size <= i)
		return (rlen);
	maxlen = (size - i) - 1;
	while (src[j] != '\0' && j < maxlen)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (rlen);
}
