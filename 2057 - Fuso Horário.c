#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int k = a + b + c;
    if(k<0)
        k = 24 + k;
    
    k = k%24;
    printf("%d\n", k);
    return 0;
}
