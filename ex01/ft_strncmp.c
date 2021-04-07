/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangykim <sangykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 03:16:13 by sangykim          #+#    #+#             */
/*   Updated: 2021/04/07 08:55:59 by sangykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		get_biglen(char *s1, char *s2)
{
	int		i;
	int		len_s1;
	int		len_s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	len_s1 = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	len_s2 = i;
	if (len_s1 > len_s2)
		return (len_s1);
	else
		return (len_s2);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < get_biglen(s1, s2) && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
