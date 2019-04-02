#include<stdio.h>
#include<math.h>

#define MAXLINE 100

int getlines(char line[], int max);

main()
{
	double sum, atof(char[]);
	char line[MAXLINE];
	int getlines(char line[], int max);

	sum = 0;
	while(getlines(line, MAXLINE) > 0)
		printf("\t%g\n",sum += atof(line));
	return 0;


}

int getlines(char s[], int lim)
{       int c, i;

        i = 0;
        while(--lim > 0 && (c=getchar()) != EOF && c!='\n')
                s[i++] = c;
        if (c == '\n')
                s[i++] = c;
        s[i] = '\0';
        return i;
}

