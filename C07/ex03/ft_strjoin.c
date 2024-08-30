
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

int	return_len(int size, char **str, int sep_len)
{
	int	i;
	int	len;

	i = -1;
	len = sep_len * -1;
	while (++i < size)
	{
		len = len + sep_len + ft_strlen(str[i]);
	}
	return (len);
}

int	get_sep_len(char *sep)
{
	int	len;

	len = 0;
	if (sep == NULL)
		return (0);
	while (sep[len] != '\0')
		len++;
	return (len);
}

void set_empty_string(char *str)
{
    if (str)
        str[0] = '\0';
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	int		i;
	char	*res;
	int		len;
	int		sep_len;

	sep_len = (sep == NULL) ? 0 : ft_strlen(sep);
	if (size == 0)
	{	
		res = (char *)malloc(1);
		set_empty_string(res);
		return (res);
	}
	len = return_len(size, str, sep_len);
	i = -1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (++i < size)
	{
		res = ft_strcpy(res, str[i]);
		if (i + 1 < size && sep != NULL)
			res = ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - len);
}


#include <stdio.h>

int main() {
	
	
	
	char *result;

	char *words1[] = {"Hello", "World", "42"};
	result = ft_strjoin(3, words1, ", ");
	if (result)
	{
		printf("Test 1: %s$\n", result);
		free(result);
	}
	else
		printf("Test 1: Memory allocation failed.\n");

	char *words2[] = {"Single"};
	result = ft_strjoin(1, words2, ", ");
	if (result)
	{
		printf("Test 2: %s$\n", result);
		free(result);
	}
	else
		printf("Test 2: Memory allocation failed.\n");

	result = ft_strjoin(0, NULL, ", ");
	if (result)
	{
		printf("Test 3: %s$\n", result);
		free(result);
	}
	else
		printf("Test 3: Memory allocation failed.\n");

	char *words4[] = {"Join", "Without", "Separator"};
	result = ft_strjoin(3, words4, "");
	if (result)
	{
		printf("Test 4: %s$\n", result);
		free(result);
	}
	else
		printf("Test 4: Memory allocation failed.\n");
	    // Test case 5: Separator is a single character
    char *words5[] = {"A", "B", "C"};
    result = ft_strjoin(3, words5, "-");
    printf("Test 5: %s$\n", result);
    free(result);

    // Test case 6: Strings with separators only
    char *words6[] = {"", "", ""};
    result = ft_strjoin(3, words6, ",");
    printf("Test 6: %s$\n", result);
    free(result);

    // Test case 7: Very long strings
    char *words7[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    result = ft_strjoin(10, words7, "-");
    printf("Test 7: %s$\n", result);
    free(result);

    // Test case 8: Separator is NULL
    char *words8[] = {"Hello", "World"};
    result = ft_strjoin(2, words8, NULL);
    printf("Test 8: %s$\n", result);
    free(result);

	return (0);
}

