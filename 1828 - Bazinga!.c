#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main (){

    int t, i;

    char she[8];
    char raj[8];

    char pedra[] = "pedra";
    char papel[] = "papel";
    char tesoura[] = "tesoura";
    char lagarto[] = "lagarto";
    char spock[] = "Spock";

     scanf("%d", &t);

     for(i = 0; i < t; i++){
        scanf("%s", she);
        scanf("%s", raj);

        if(strcmp(she, raj) == 0){
            printf("Caso #%d: De novo!\n", i+1);
        }
        if(strcmp(she, pedra) == 0){
            if(strcmp(raj, papel) == 0){
                    printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
            if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, lagarto) == 0){
                    printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                    }
        }
        if (strcmp(she, lagarto) == 0){
            if (strcmp(raj, pedra) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
            if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
            if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            }

        if(strcmp(she, papel) == 0){
            if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
            }
        }
        if(strcmp(she, tesoura) == 0){
            if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
            if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
        }
        
        if(strcmp(she, spock) == 0){
            if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
            if (strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                }
            if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                }
        }

     }
    return 0;
}

