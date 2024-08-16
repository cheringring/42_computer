#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	check;
	int	i;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= "a" && str[i] <= "z")
			i++;
		else if (str[i] >= "A" && str[i] <= "Z")
			i++;
		else
		{
			check = 0;
			break ;
		}
	}
	return (check);
}
#include <stdio.h>
