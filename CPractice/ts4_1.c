#include <stdio.h>
#include <string.h>
int strindex(char s[], char t[])
{
        int lt = strlen(t);
        int ls = strlen(s);
        if (lt > ls)
		return -1;
	int i, j, k;
        for (i = ls - lt; i >= 0; i--)
	{
		for (j=i, k=0; t[k] != '\0' && s[j]==t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}

int main()
{
	char s1[] = "mymymymy" ;
	char s2[] = "my1";
	printf("result: %d\n", strindex(s1, s2));
}
