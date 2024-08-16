/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:53:29 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/16 19:09:24 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_flag(char c)
{
	if (c >= '0' && c <= '9')
		return (3);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;
	int	type;

	i = 0;
	flag = 1;
	while (str[i])
	{
		type = check_flag(str[i]);
		if (type == 1)
		{
			str[i] = flag ? str[i] - 32 : str[i];
		}
                else if (type == 2)
		{
			str[i] = flag ? str[i] : str[i] + 32;
		}
		else if (type == 0)
		{
			flag = 1;
		}
                else 
		{
			flag = 0;
        }
		i++;
	}
        return (str);
}
