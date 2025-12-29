/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:29:55 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:53:53 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_int(va_list ap)
{
	int		char_count;
	int		len;
	char	*str;

	char_count = 0;
	str = ft_itoa(va_arg(ap, int));
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	char_count = char_count + len;
	free(str);
	return (char_count);
}
