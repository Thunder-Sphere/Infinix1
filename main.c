#include <stdio.h>

int multiply(int a, int b) 
{
    return a * b;
}
int main() 
{
    int x = 5;
    int y = 3;
    int result = multiply(x, y);
    printf("Multiplication result: %d\n", result);
    return 0;
}


