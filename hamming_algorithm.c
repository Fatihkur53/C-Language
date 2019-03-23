//Hamming Algorithm with C language
#include <stdio.h>

int ishamming(int x)
{
    if(x==1) return 1;
    if(x%2==0) return ishamming(x/2);
    if(x%3==0) return ishamming(x/3);
    if(x%5==0) return ishamming(x/5);
    return 0;
}

int hamming(int x){
    if(x==1) return 1;
    hamming(x-1);
    if(ishamming(x)) printf("%d\n", x);
}

int main(){
    hamming(50);
    puts("");
    return 0;
}