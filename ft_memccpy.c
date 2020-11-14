/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:50:24 by nsterk        #+#    #+#                 */
/*   Updated: 2020/11/05 14:13:00 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;
	size_t			i;

	dptr = (unsigned char*)dst;
	sptr = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dptr[i] = sptr[i];
		if (sptr[i] == (unsigned char)c)
			return (dptr + (i + 1));
		i++;
	}
	return (NULL);
}
