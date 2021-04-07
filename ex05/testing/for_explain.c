/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangykim <sangykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 07:11:45 by sangykim          #+#    #+#             */
/*   Updated: 2021/04/07 08:38:59 by sangykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void	get_len_dest_src(char *dest, char *src, int *len_dest, int *len_src)
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
	int		len_dest;
	int		len_src;
	int		i_temp;
	int		i;

	i = 0;
	get_len_dest_src(dest, src, &len_dest, &len_src);
	//printf("%d,		%d", len_dest, len_src);
	if (len_dest >= size)
		return (len_dest + size);
	else if(len_dest < size)
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

int	main(void)
{
	char	dest[20] = "12345";
	char	src[] = "abcd";
	
	char	dest1[20] = "12345";
	char	src1[] = "abcd";

	printf("%u", ft_strlcat(dest, src, 9));
	printf("\n%s", dest);
	
	printf("\n\n\n");
	
	printf("%lu\n", strlcat(dest1, src1, 9));
	printf("%s", dest1);
	
	return 0;
}

	
