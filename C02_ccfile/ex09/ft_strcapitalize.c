
int     check_flag(char c)
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

char    *ft_strcapitalize(char *str)
{
        int     i;
        int     flag;
        int     type;

        i = 0;
        flag = 1;
        while (str[i])
        {
                type = check_flag(str[i]);
                if (flag == 1 && type == 1)
                {
                        str[i] = str[i] - 32;
                        flag = 0;
                }
                else if (flag == 0 && type == 2)
                {
                        str[i] = str[i] + 32;
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
                   
#include <stdio.h>

int main(void)
{
	
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", str);
    printf("%s\n", ft_strcapitalize(str));
    
    return 0;
}
