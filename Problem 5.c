#include <stdio.h>
#include <math.h>
# include <stdlib.h>

void update(int *a,int *b) {
    int c = *a;
    *a =(c + *b);
    *b =abs(c - *b);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
