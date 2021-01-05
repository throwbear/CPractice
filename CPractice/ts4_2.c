#include <ctype.h>
#include <stdio.h>

#define MAXLINE 100

int get_line(char s[], int lim)
{
	int c, i;
	i=0;
	while((c=getchar()) != EOF && c != '\n' && i < lim-1)
		s[i++]=c;
	s[i] = '\0';
	return i;
}

double atof(char s[])
{
	double val, power;
	double val1;
	int i, j, k, sign, esign;

	for (i=0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	val1 = sign * val / power;
	if (s[i] == 'e')
		i++;
        esign = (s[i] == '-')? -1: 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (j = 0; isdigit(s[i]); i++)
		j = 10 * j + (s[i] - '0');
	if (j == 0)
		return val1;
	sign = 1;
	for (k=0; k<j; k++)
		sign *= 10;
	if (esign == 1)
		return val1 * sign;
	else
		return val1 / sign;
}

int main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int get_line(char line[], int max), res;

	sum = 0;
	res = get_line(line, MAXLINE);
	printf("Turn to: %f\n", atof(line));
	//while (getline(line, MAXLINE) > 0)
	//	printf("\t%g\n", sum += atof(line));
	return 0;
}
