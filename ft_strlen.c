/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:37:47 by cempassi          #+#    #+#             */
/*   Updated: 2018/10/12 12:38:30 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	if (*s == '\0' || !s)
		return (0);
	i = 0;
	while (s[++i])
		;
	return (i);
}
