/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:04:42 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/17 18:37:11 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while ((s1[x] != '\0' && s2[x] != '\0') && (x < n))
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	if (x == n)
	{
		return (0);
	}
	return (s1[x] - s2[x]);
}
