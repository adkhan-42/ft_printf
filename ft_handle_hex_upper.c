/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:20:52 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:53:46 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_hex_upper(va_list ap)
{
	int		char_count;
	int		len;
	char	*str;

	char_count = 0;
	str = ft_utoa_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	char_count = char_count + len;
	free(str);
	return (char_count);
}
