#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d ",a+b);
    printf("%d",abs(a-b));
    printf("\n%.1f ",c+d);
    printf("%.1f",fabs(c-d));
	return 0;
}
