/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:50:02 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/14 11:16:28 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c  && (s[i + 1] == c ))
			count++;
		i++;
		if (s[i] == '\0' && s[i - 1] != c)
			return (count + 1);
	}
	return (count);
}

char	**alloc_2d(char **str, char const *str2, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	j = 0;
	while (str2[i])
	{
		while (str2[i] == c && str2[i])
			i++;
		while (str2[i] != c && str2[i])
		{
			count++;
			i++;
		}
		while (str2[i] == c && str2[i])
			i++;
		if(!(str[j] = (char *)malloc(sizeof(char) * (count + 1))))
			return(NULL);
		str[j][count] = '\0';
		count = 0;
		j++;
	}
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		k;

	if(!(str1 = (char **)malloc(sizeof(char *) * (ft_count_words(s,c) ))))
		return(NULL);
	if(!alloc_2d(str1, s, c))
		return(NULL);
	i = 0;
	j = -1;
	while (s[i] && str1[i])
	{
		while (str1[++j])
		{
			while (s[i] == c  && s[i])
				i++;
			k = -1;
			while (s[i] != c && s[i])
			{
				str1[j][++k] = s[i];
				i++;
			}
		}
	}
	if (str1 == NULL)
	{
		**str1 = '\0';
		return (str1);
	}
	return (str1);
}
