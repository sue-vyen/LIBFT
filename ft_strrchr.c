/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:25:32 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 10:41:35 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		pos;
	char	*new_str;

	pos = 0;
	new_str = 0;
	while (str[pos])
	{
		if (str[pos] == (unsigned char)c)
			new_str = ((char *)str + pos);
		pos++;
	}
	if (str[pos] == (unsigned char)c)
		return ((char *)str + pos);
	return (new_str);
}

// int	main()
// {
// 	char str[] = "abcxdefghijklnmopqrstuvwxyz";

// 	printf("%s\n", ft_strrchr(str, 'x'));
// 	return (0);
// }