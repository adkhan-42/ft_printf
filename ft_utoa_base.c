/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:59 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:55:10 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fill_result(char *res, unsigned long long n, int size,
		char *base_charset)
{
	int	base_len;

	base_len = ft_strlen(base_charset);
	res[size] = '\0';
	while (n != 0)
	{
		size--;
		res[size] = base_charset[n % base_len];
		n = n / base_len;
	}
}

static int	get_len(unsigned long long n, int base_len)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		n /= base_len;
		size++;
	}
	return (size);
}

char	*ft_utoa_base(unsigned long long n, char *base_charset)
{
	int		size;
	int		base_len;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	base_len = ft_strlen(base_charset);
	size = get_len(n, base_len);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	fill_result(res, n, size, base_charset);
	return (res);
}
