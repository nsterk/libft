/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 15:10:54 by nsterk        #+#    #+#                 */
/*   Updated: 2020/11/12 21:23:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
