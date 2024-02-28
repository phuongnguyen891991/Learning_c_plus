#include <stdio.h>

int first_par = 0;
int second_par = 1;

int fibonacci_func(int n)
{
    if (n == 0 || n == 1) {
        return 0;
    }

    int third_par;

    third_par = first_par + second_par;
    first_par = second_par;
    second_par = third_par;
    printf("%d ", third_par);

    return fibonacci_func(n-1);
}

void print_fibonacci(int n)
{
    if (n == 0) {
        return;
    }
    else if (n == 1) {
        printf("%d", first_par);
    }
    else if (n == 2) {
        printf("%d %d ", first_par, second_par);
    }
    else if (n >= 3) {
        printf("%d %d ", first_par, second_par);
        fibonacci_func(n);
    }


}

// function use to print fibonacci
int main() {
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    print_fibonacci(n);
    return 0;
}