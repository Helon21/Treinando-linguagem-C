#include <stdio.h>
int main(){
    double n = 3.14159, raio, area;
    scanf("%lf", &raio); /* %lf para double, %f para float */
    area = n * (raio * raio);
    printf("A=%.4f\n",area);

    return 0;
}