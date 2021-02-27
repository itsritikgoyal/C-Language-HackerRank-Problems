#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
void calculate_the_maximum(int n, int k) 
{
    int max_and=0;
    int max_or=0;
    int max_xor=0;
    int a,b,c;
    for (int i=1;i<n+1;i++){
            for (int j=i+1;j<n+1;j++){
                a = (i&j);
                if((a>max_and)&&(a<k))
                    max_and = a;
                b = (i|j);
                if((b>max_or)&&(b<k))
                    max_or = b;
                c = (i^j);
                if((c>max_xor)&&(c<k))
                    max_xor = c;
            }
            
    }
    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d",max_xor);   
        
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
