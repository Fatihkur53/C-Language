/*    --Barbut sans Oyunu--

Bir oyuncu iki zar atar.Her zarin alti kenari vardir.Bu yuzleri uzerinde 1,2,3,4,5 ve 6 noktalari vardir.
Zar durduktan sonra,yukariya dogru duran iki yuz uzerindeki sayilarin toplami hesaplanir.ilk atista toplam
7 veya 11 ise,oyuncu kazanir.Ilk atista toplam 2,3 veya 12 ise ("Barbut" denir),oyuncu kaybeder(yani "dukkan"
kazanir).ilk atista toplam 4,5,6,8,9 veya 10 gelir ise,bu toplam oyuncunun "puan" olur.Kazanmak icin,"Puaninizi yapana"
kadar zar atmaya devam etmek zorundasiniz.Puani yapmadan once 7 atan oyuncu kaybeder
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

enum Status{CONTINUE,WON,LOST};
int rollDice(void);

int main(void)
{
    int sum;//atilan zarin toplami
    int myPoint;//kazanmak icin oyuncu bu puani yapmak zorunda

    enum Status gameStatus;//continue,won,lost icerebilir

    //�imdi saati kullanarak rastgele sayi uretcisini rastgele hale getirelim
    srand(time(NULL));
    sum=rollDice();//zarlarin ilk atıs
    //zarlarin toplaminin durumuna gore switch case acalim
    switch(sum){
    //7 veya 11 gelirse oyun kazanilmistir
    case 7:
    case 11:
        gameStatus = WON;
        break;
    //eger 2,3,12 gelirse oyun kaybedilmistir
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint=sum;
        printf("Point is %d\n",myPoint);
        break;//istege bagli
    }//switch end

    while(CONTINUE==gameStatus){//oyuncu zar atmak zorunda
        sum=rollDice();//zarlar, tekrar et
        if(sum==myPoint){//puan yaparak kazanildi
            gameStatus = WON;
        }
        else{
            if(7==sum){
                gameStatus = LOST;
            }
        }
    }
    if(WON==gameStatus){
        puts("Player wins ");
    }
    else{
        puts("Player loses");
    }
    return 0;
}//main end

//zarlari at, toplam degeri ve sonuclari gonderecek fonksiyon

int rollDice(void){
    int die1;//ilk zar
    int die2;//ikinci zar
    int workSum;//zarlarin toplami

    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);
    workSum=die1+die2;
    printf("Player rolled %d + %d = %d\n",die1,die2,workSum);
    return workSum;//zarlarin toplamimi gonder

}//rollDice fonksiyon sonu