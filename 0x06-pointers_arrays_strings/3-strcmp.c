#include "main.h"

/**
 * main - function that works exactly like strcmp
 *
 * Description - print a function that works as strcmp
 *
 * Return: Always 0 (success)
 */

int my_strcmp(char s1[], char s2[])
{
	for(int i = 0; ; i++)
	{
		if(s1[i] == '\0' && s2[i] == '\0')
		{
			return 0;
		}
		int a1 = (int) s1[i];
		int a2 = (int) s2[i];
		if(s1 > s2)
		{
			return 1;
		}
		if(s2 > s1)
		{
			return -1;
		}
	}
}
