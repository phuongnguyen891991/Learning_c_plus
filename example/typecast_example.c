#include <stdio.h>

int main()
{
    float average = 0;
    int num1, num2, num3;

    num1 = 91;
    num2 = 85;
    num3 = 83;

    average = (float)(num1 + num2 + num3) / 3;

    printf("Average: %f \n", average);
    return 0;
}