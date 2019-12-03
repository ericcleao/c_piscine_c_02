/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:20:18 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/02 17:22:46 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char_as_hex(unsigned char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			print_char_as_hex(str[i]);
		}
		i++;
	}
}
