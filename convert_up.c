//Girilen bir cumleyi buyuk harfe donusteren kod

#include <stdio.h>
#include <ctype.h> //toupper fonksiyonu kullanmak icin eklendi

void buyuk_cevir(char *dizi);

int main(int argc, char const *argv[])
{
    char cumle[20];                          //kelimeyi tutmak icin
    printf("Lutfen bir cumle giriniz:\n");   //kelime girilmesi istenir
    scanf("%[^\n]s", cumle);                 //enter alininca cumle girilmis oluyor
    printf("Cevrilecek cumle =%s\n", cumle); //cevrilecek cumleyi bastiralim
    buyuk_cevir(cumle);                      //fonksiyona pointer olarak gondeririz
    printf("Cevrilmis cumle = %s\n", cumle); //ve cikti olarak gozlemleriz
    return 0;
}

void buyuk_cevir(char *dizi)
{
    while (*dizi != '\0')
    {                           //pointer aracaligla verilen cumleyi tutuyoruz
        *dizi = toupper(*dizi); //toupper fonksiyonu araciligla kelimeleri kucukse buyultuyuruz
        dizi++;                 //ve pointer adresindeki degerini bir arttirarak diger harfa geciyoruz
    }
}
