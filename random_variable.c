#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i;
    srand((unsigned) time(NULL));
    printf("20 variables from 0-100\n\n");
    for(i=0;i<20;i++)
    {
        printf("%d\n",rand()%100);
    }
    return 0;
}
