#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n, i, x, j, num;

   scanf("%d", &n);

   for(i=0; i<n; i++){
        scanf("%d", &x);
        num = 0;
        for(j=1; j<x; j++){
            if(x % j == 0){
                num += j;
            }
        }
        if(x == num){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
   }

}
