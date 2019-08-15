#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, k;
    int maria;
    int joao;

    scanf("%d ", &n);
    char num[20001];

    while(n != 0){
        gets(num);
        maria = 0;
        joao = 0;
        for(k = 0; num[k] != '\0'; k++){
            if(k % 2 == 0){
                if(num[k] == '0'){
                    maria += 1;
                }
                else if(num[k] == '1'){
                    joao +=1;
                }
            }
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
        scanf("%d ", &n);
    }
}

