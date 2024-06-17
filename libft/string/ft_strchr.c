/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:35:19 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/17 17:30:00 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *string, int searchedchar)
{
	char			*str;
	unsigned char	char_searchedchar;

	str = (char *) string;
	char_searchedchar = (unsigned char) searchedchar;
	while (*str)
	{
		if (*str == char_searchedchar)
			return (str);
		str++;
	}
	if (*str == char_searchedchar)
		return (str);
	return (NULL);
}
