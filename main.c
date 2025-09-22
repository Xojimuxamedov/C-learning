#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double V = 0.0;
    const double PI = 3.14159;

    printf("radiusni kiriting: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    printf("aylana yuzi: %.2lf\n", area);

    surfaceArea = area * 4;
    printf("shar yuzi: %.2lf\n", surfaceArea);

    V = (4.0 / 3.0) * PI *pow(radius, 3);

    printf("hajmi: %.2lf\n", V);
    

    return 0;
};      