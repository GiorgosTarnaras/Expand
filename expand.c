#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[])
{
	int i, j, n;
	i = j = 0;
	n = strlen(s1) - 1;
	
	while(s1[i] == '-' && s1[n] == '-')
		i++, j++;
	
	n -= j;
	j = 0;
	
	while(j <= s1[n] - s1[i])
	{
		s2[j] = s1[i] + j++;
	} 
	
	s2[j] = '\0';
}