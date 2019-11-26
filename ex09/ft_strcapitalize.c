/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:06:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/26 17:20:24 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int		is_alphanumeric(char c)
{
	if (is_lowercase(c) || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (is_lowercase(str[0]))
	{
		str[0] -= ' ';
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && !is_alphanumeric(str[i - 1]))
		{
			if (is_lowercase(str[i]))
			{
				str[i] -= ' ';
			}
		}
		i++;
	}
	return (str);
}
