//Dizi gosterimi ve isaretci gosterimi kullanarak karakter dizini kopyalamak
#include <stdio.h>
#define SIZE 10

void copy1(char *const s1, const char *const s2); //karakter dizisini kopyalamak icin
void copy2(char *s1, const char *s2);             //isaretci kullanarak diziyi kopyalamak icin

int main(void)
{
    char string1[SIZE];          //1.string dizisi olusturulur
    char *string2 = "hello";     //bir karkter dizini isaretcisi olustur
    char string3[SIZE];          //string3 dizisi olustur
    char string4[] = "Good bye"; //bir karakter dizini isaretcisini olustur
    copy1(string1, string2);
    printf("String1=%s\n", string1);
    copy2(string3, string4);
    printf("String3 = %s\n", string3);
    return 0;
}
//dizi gosterimi kullanarak s2'yi s1'e kopyala
void copy1(char *const s1, const char *const s2)
{
    size_t i; //sayac
    for (i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {     //blok icersininde bir sey yapilmaz
        ; //s1[i]=s2[i] esitleyerek devam eder ne zaman bitisi gordugunde '\0' durur
    }
}
//isaretci gosterimi kullanarak s2'yi s1'e kopyala
void copy2(char *s1, const char *s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {     //blok icinde tekrardan bir sey yapilmaz
        ; //isaretciler birbirine esitlenene kadar devam edilir ve isaretciler arttirilir
    }     //sayac kullanilmaz.
}
