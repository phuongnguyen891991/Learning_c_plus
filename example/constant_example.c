#include <stdio.h>
#include <math.h>

int main()
{
    const float pi = 3.14159;
    float radius, area;

    radius = 0;
    area = 0;

    radius = 12;
    area = radius * radius * pi;
    printf("Area: %f \n", area);
    return 0;
}