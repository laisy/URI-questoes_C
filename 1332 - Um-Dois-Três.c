#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i, k, j, cont1, cont2, cont3;
    scanf("%d", &n);
    char palavra[6];

    char one[] = "one";
    char two[] = "two";
    char three[] = "three";

    for(i=0; i<n; i++){
        cont1 = 0;
        cont2 = 0;
        scanf("%s", palavra);
        if(strlen(palavra) > 3){
            printf("3\n");
        }else{
            for(k=0; palavra[k] != '\0'; k++){
                if(palavra[k] != one[k]){
                    cont1 += 1;
                }
                if(palavra[k] != two[k]){
                    cont2 += 1;
                }
            }
            if(cont2 <= 1){
                printf("2\n");
            }else if(cont1 <= 1){
                printf("1\n");
            }
        }
    }
}

