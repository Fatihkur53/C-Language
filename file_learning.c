//yas,isim,vize,final gibi degerleri struct yapisinda tutup
//vize ve final notlarinin ortalamasini alan
//ve bunlari bir dosyaya yazidiran bir fonksiyon ile
//pointer mantigi ile dosyaya yazma ogrenildi

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

struct ogrenci // struct yapisi
{
    int yas;
    char isim[25];
    float vize, final;
};

void dosyaya_yazdir(struct ogrenci *); //prototip
float ortalama(struct ogrenci *);      //prototip

int main(int argc, char const *argv[])
{
    struct ogrenci ogr[5]; //struct yapisi maine tanimlandi
    int s;
    printf("eger yasa -1 basilirsa ogrenci alimi duracaktir.\n");
    for (s = 0; s < 5; s++) // ogrenci bilgileri aliniyor.
    {
        printf("\n\n%d ogrencinin bilgilerini giriniz\n", s + 1);
        printf("-----------------------------------\n");
        fprintf(stdout, "Yasini giriniz:\n");
        scanf("%d", &(ogr[s].yas));
        if (ogr[s].yas == -1)
            break;
        fprintf(stdout, "Isim giriniz:\n");
        scanf("%s", ogr[s].isim);
        fprintf(stdout, "Vizesini giriniz:\n");
        scanf("%f", &ogr[s].vize);
        fprintf(stdout, "Finalini giriniz:\n");
        scanf("%f", &ogr[s].final);
    }
    printf("Ogrenci alimi tamamladi..\n");
    dosyaya_yazdir(ogr);
    return 0;
}

//dosyaya struct yapisi bir adres oldugundan pointer araciligiyla degerler uzerinde yazma yapiyoruz
void dosyaya_yazdir(struct ogrenci *student)
{
    FILE *hedef_dosya;                        //dosya yazmak icin pointer olusturuldu
    hedef_dosya = fopen("deneme1.txt", "w+"); //pointer adresine yazilacak txt dosyasi yazildi
    int s;                                    //sayac
    for (s = 0; s < 5; s++)
    {
        if (student->yas == -1) // Eger alimi durdurmak icin -1 basilmissa
            break;              //for dongusunden cikmak icin break komutu eklendi
        fprintf(hedef_dosya, "\n\n%d ogrencinin bilgilerini\n", s + 1);
        fprintf(hedef_dosya, "-----------------------------------\n");
        fprintf(hedef_dosya, "Isim:%s\n", student->isim);
        fprintf(hedef_dosya, "Yas:%d\n", student->yas);
        fprintf(hedef_dosya, "Vize:%.2f\n", student->vize);
        fprintf(hedef_dosya, "Finali:%.2f\n", student->final);
        fprintf(hedef_dosya, "Ogrencinin not ortalamasi = %.2f\n\n", ortalama(student));
        student++;
    }
    fclose(hedef_dosya); //dosya ile islemimiz bittikten sonra dosyayi kapatiyoruz
}

//ortalama hesaplamak icin ayri bir fonksiyon olusturuldu
float ortalama(struct ogrenci *st)
{
    float sonuc;
    sonuc = st->vize * 0.4 + st->final * 0.6; //vizenin degeri %40 final degeri ise %60 alindi
    return sonuc;                             //sonuc return edilerek ortalama hesaplandi
}
