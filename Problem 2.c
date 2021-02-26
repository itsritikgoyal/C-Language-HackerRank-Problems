#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    char s1[100];
    scanf("%s",&s1);
    printf("\n%s",s1);
    scanf("\n");
    char s2[100];
    scanf("%[^\n]%*n",&s2);
    printf("\n%s",s2);
    return 0;
}
