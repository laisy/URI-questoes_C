#include <stdio.h>
 
int main() {
 
 double n = 3.14159;
double r;

scanf("%lf", &r);
double raio = r*r;
double area = raio * n;


printf("A=%.4lf\n", area);

    return 0;
}
