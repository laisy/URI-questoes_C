#include <stdio.h>
#include <stdlib.h>

int main()
{
float temp, km, vm, litros;

 scanf("%f", &temp);
 scanf("%f", &vm);

 km = vm*temp;

 litros = km/12;

printf("%.3f\n", litros);

return 0;
}
