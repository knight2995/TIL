#include "myStr.h"

int _strlen(const char *str)
{
	int ret = 0;

	while (str[ret] != '\0')
		ret++;

	return ret;
}

int _strcmp(const char *str1, const char *str2)
{
	int p = 0;

	while (str1[p] != '\0' || str2[p] != '\0')
	{
		if (str1[p] != str2[p])
			return str1[p] - str2[p];
		p++;
	}
	return 0;
}

char* _strchr(char* str, char c)
{
	char *p = str;
	while (*p != '\0')
	{
		if (*p == c)
			return p;

		p++;
	}
	return 0;
}

char* _strcpy(char *dest, char *src)
{

	char *dest_p = dest;
	char *src_p = src;

	while (*src_p != '\0')
	{
		*dest_p = *src_p;
		dest_p++, src_p++;
	}
	*dest_p = '\0';

	return dest;
}
char * _strcat(char *dest, char *src)
{
	char *dest_p = dest;
	char *src_p = src;

	while (*dest_p != '\0')
		dest_p++;

	while (*src_p != '\0')
	{
		*dest_p = *src_p;
		dest_p++, src_p++;
	}
	*dest_p = '\0';

	return dest;
}