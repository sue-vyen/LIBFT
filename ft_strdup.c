/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:59:50 by sloke             #+#    #+#             */
/*   Updated: 2023/05/24 14:46:24 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		count;
	char	*new_str;
	int		i;

	count = 0;
	i = 0;
	while (str[count])
		count++;
	new_str = malloc(count + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < count)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	const char	*original = "Hello";
// 	char		*duplicate = ft_strdup(original);

// 	if (duplicate != NULL)
// 	{
// 		printf("%s\n", original);
// 		printf("%s\n", duplicate);
// 	}
// 	return (0);
// }
