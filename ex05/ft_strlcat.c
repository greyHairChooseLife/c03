/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangykim <sangykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 07:11:45 by sangykim          #+#    #+#             */
/*   Updated: 2021/04/14 20:11:38 by sangykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				g(char *dest, char *src, unsigned int *ld, unsigned int *ls)
{
	int				i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	*ld = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	*ls = i;
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	int				i_temp;
	unsigned int	i;

	i = 0;
	g(dest, src, &len_dest, &len_src);
	if (len_dest < size)
	{
		i_temp = len_dest;
		while (i + 2 + len_dest <= size)
		{
			dest[i_temp] = *src;
			src++;
			i++;
			i_temp++;
		}
		return (len_dest + len_src);
	}
	if (len_dest >= size)
		return (size + len_src);
	return (0);
}
