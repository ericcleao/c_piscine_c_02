/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:17:24 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/27 09:26:57 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
		}
		else if (i == size - 1)
		{
			dest[i] = '\0';
		}
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (i);
}
