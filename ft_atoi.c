/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 19:02:41 by nsterk        #+#    #+#                 */
/*   Updated: 2020/11/09 14:42:32 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skipspace(const char *str)
{
	while (*str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\v' || *str == ' ')
		str++;
	return (str);
}

static int			ull_overflow(int negative,
				unsigned long long num, const char *str)
{
	if (negative == -1 && *str > 5)
		return (0);
	if (negative == 1 && *str > 5)
		return (-1);
	num = (num * 10) + (*str - '0');
	return (num);
}

static int			ll_overflow(int negative,
					unsigned long long num, const char *str)
{
	if (negative == -1 && *str > 8)
		return (0);
	if (negative == 1 && *str > 7)
		return (-1);
	num = (num * 10) + (*str - '0');
	return (num * negative);
}

int					ft_atoi(const char *str)
{
	unsigned long long	num;
	int					negative;

	num = 0;
	negative = 1;
	if (*str == '\0')
		return (0);
	str = skipspace(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (num >= 92233720368547758)
			return (ll_overflow(negative, num, str));
		else if (num >= 1844674407370955161)
			return (ull_overflow(negative, num, str));
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * negative);
}
