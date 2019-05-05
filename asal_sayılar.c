//Asal sayılar
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sayi,bolen,ust_sinir;
    int kac;
    printf("1'den büyük üst sınırı giriniz:\n");
    scanf("%d",&ust_sinir);
    printf("Asal sayılar\n");
    for(sayi=2;sayi<=ust_sinir;sayi++)
    {
        //printf("%d",sayi);
        for(bolen=2;sayi%bolen!=0;bolen++){ //Asallığın kontrolü
            if(bolen==sayi)
            {
                printf("%6d",sayi);
                if(++kac%10==0){ // 10 satırı tamamlarsa bir sonraki
                    printf("\n");
                } //Satıra geçicek 
            }
        } 
    }
    return 0;
}
