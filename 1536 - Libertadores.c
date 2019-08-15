#include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main (){

 int M, M1, V, V1, i = 0, n = 0, TIME1= 0, TIME2= 0;
 scanf("%d", &n);

     while(i<n){
         scanf ("%d x %d", &M, &V);
         scanf ("%d x %d", &M1, &V1);
         TIME1 = M + V1;
         TIME2 = M1 + V;

        if (TIME1>TIME2){
            printf ("Time 1\n");
        }
        else if (TIME1<TIME2){
            printf ("Time 2\n");
        }
        else{
                if (TIME1 - TIME2 > TIME2 - TIME1){
                    printf ("Time 1\n");
                }
                else if (TIME1 - TIME2 < TIME2 - TIME1){
                    printf ("Time 2\n");
                    }
                else{
                    if (V1 > V){
                        printf ("Time 1\n");
                    }
                    else if (V1 < V) {
                        printf ("Time 2\n");
                    }
                    else {
                        printf ("Penaltis\n");
                    }
                }
        }
        i++;

     }
    return 0;
}

