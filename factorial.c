//recursive fonksiyon kullanarak fonksiyon hesaplama
#include <stdio.h>

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

int main(int argc, char const *argv[])
{
    int x;
    printf("Please enter the factorial number:\n");
    scanf("%d", &x);
    factorial(x);
    printf("%d\n", factorial(x));
    return 0;
}
