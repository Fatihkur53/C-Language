//Strcmp fonksiyonun ne ise yaradigini ogrenicegiz
//strcmp iki katari birbiri ile karsilastirmakta kullaniriz
//Katarlar birbiri ile ayni ise 0,alfabetik siralamada katar1>katar2 ise arti deger
//katar1<katar2 ise eksi bir deger gonderir.
//strcmp fonksiyonu su sekildedir:
//int strcmp(cons char *katar1,const char katar2);

#include <stdio.h>
#include <string.h> //String.h fonksiyonu kullanamamiz gerekiyor

int main(int argc, char const *argv[])
{
    printf("İlk harf onde =%d\n",strcmp("A","B"));// a b'den once oldugu icin
    printf("İlk harf onde =%d\n",strcmp("B","A"));
    printf("İlk harf onde =%d\n",strcmp("C","C"));
    return 0;
}
