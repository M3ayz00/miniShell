/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:09:14 by sait-alo          #+#    #+#             */
/*   Updated: 2024/07/19 17:08:01 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	char_c;

	i = 0;
	char_c = (char)c;
	while (s && s[i])
	{
		if (s[i] == char_c)
			return ((char *) &s[i + 1]);
		i++;
	}
	if (char_c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
