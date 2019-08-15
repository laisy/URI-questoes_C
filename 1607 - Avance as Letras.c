#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main (){
    int t, i, j, cont = 0, soma = 0, lena;
    char a[10002];
    char b[10002];

    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%s %s", &a, &b);
        lena = strlen(a);

        for(j=0; j < lena; j++){
            if(a[j] != b[j]){
                cont = b[j] - a[j];
                if(cont < 0){
                    soma += cont + 26;
                }
                else{
                    soma += cont;
                }
            }

        }
        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}
