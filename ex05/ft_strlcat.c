/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangykim <sangykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 07:11:45 by sangykim          #+#    #+#             */
/*   Updated: 2021/04/07 08:59:13 by sangykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			get_len(char *dest, char *src, int *len_dest, int *len_src)
{
	int		i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	*len_dest = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	*len_src = i;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		len_dest;
	unsigned int		len_src;
	int		i_temp;
	int		i;

	i = 0;
	get_len(dest, src, &len_dest, &len_src);
	if (len_dest >= size)
		return (len_dest + size);
	else if (len_dest < size)
	{
		i_temp = len_dest;
		while (i <= size - 2 - len_dest)
		{
			dest[i_temp] = *src;
			src++;
			i++;
			i_temp++;
		}
		return (len_dest + len_src);
	}
	return (0);
}
