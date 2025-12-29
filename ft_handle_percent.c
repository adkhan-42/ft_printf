/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:07 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:53:59 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_percent(va_list ap)
{
	int	char_count;

	char_count = 0;
	(void)ap;
	ft_putchar_fd('%', 1);
	char_count++;
	return (char_count);
}
