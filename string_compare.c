#include <stdio.h>
#include<string.h>
int main() 
{
char str1[]="ice";
char str2[]="cream";
int i,j;
i=strcmp(str1,"hello");
j=strcmp(str2,"cream");
printf("%d,%d\n",i,j);

    return 0;
}
/*
Output
1,0
*/
