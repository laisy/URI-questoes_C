#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A;
    float B;
    float C;
    float MEDIA;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    A = A * 2;
    B = B * 3;
    C = C * 5;

    MEDIA = (A + B + C) / 10;

    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
