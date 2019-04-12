/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:35:11 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/10 23:39:18 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*t;

	i = 0;
	t = (char *)malloc(sizeof(*s));
	if (t == NULL)
		return (NULL);
	while (s[i] && f)
	{
		t[i] = (f(i, s[i]));
		i++;
	}
	return (t);
}
