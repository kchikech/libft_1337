/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 01:39:45 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/11 02:03:18 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;

	t = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (t == NULL)
		return (NULL);
	t = ft_strcat(t, (char *)s1);
	t = ft_strcat(t, (char *)s2);
	return (t);
}
