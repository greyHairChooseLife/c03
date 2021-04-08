/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangykim <sangykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 04:58:21 by sangykim          #+#    #+#             */
/*   Updated: 2021/04/08 11:57:02 by sangykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_len(char *to_find, int *needle_len)
{
	int		i;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	*needle_len = i;
}

void	index_init(int *i, int *k, int *check_value)
{
	*i = 0;
	*k = 0;
	*check_value = 0;
}

int		check_answer(char *str, char *to_find, int i, int needle_len)
{
	int		check_value;

	check_value = 0;
	while (str[i] == *to_find)
	{
		i++;
		to_find++;
		check_value++;
		if (check_value == needle_len)
			return (1);
	}
	return (2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		check_value;
	int		needle_len;

	if (*to_find == '\0')
		return (str);
	index_init(&i, &k, &check_value);
	get_len(to_find, &needle_len);
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			if (check_answer(str, to_find, i, needle_len) == 1)
				return (str + i);
		}
		i++;
	}
	return (0);
}
