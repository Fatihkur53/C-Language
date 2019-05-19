//2 Sayinin ebobunu bulan kod.
#include <stdio.h>

int fonksiyon(int x, int y);

int main(int argc, char const *argv[])
{
    int x, y, alinan_deger;
    printf("Eboblarini bulmak istediginiz rakamlari giriniz:\n");
    scanf("%d %d", &x, &y);
    alinan_deger = fonksiyon(x, y);
    printf("%d-%d ebobu = %d\n", x, y, alinan_deger);
    return 0;
}

int fonksiyon(int x, int y)
{
    int ebob, r;
    while (y != 0)
    {
        r = x;     //r degiskenine atılıyor deger tutulmasi icin
        x = y;     //x degiskenine y degeri atiliyor
        y = r % y; //r ye atilan deger y degeri ile bolunuyor y degiskenine atiliyor
        ebob = x;  //eger y 0 olmadıgı icin donguye tekrar giriyor ve 0 oldugundaki x degerini eboba atıyor
    }
    return ebob;
}
