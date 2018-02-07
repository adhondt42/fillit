/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:10:22 by avallois          #+#    #+#             */
/*   Updated: 2017/11/23 15:06:11 by avallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	p;

	p = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[p] != '\0' && p != n)
		s1[i++] = s2[p++];
	s1[i] = '\0';
	return (s1);
}