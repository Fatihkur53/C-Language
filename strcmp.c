//strcmp ögrenmek icin yapılan kod.

#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
    const char *s1 = "Happy new yearasa";
    const char *s2 = "Happy new year";
    const char *s3 = "Happy holidays";
    //printf("s1=s2 esit mi %d \n", strcmp(s1, s2));
    //printf("s1=s3 %d\n", strncmp(s1, s3, 7));
    int a = strcmp(s1, s2);  //stcmp bir int deger döndürür
    if (strcmp(s1, s2) == 0) //eger esit ise 0 degeri
    {
        printf("Karkterler aynıdır.\n");
    }
    else if (a > 0) //eger pozitif ise s1 uzun oldugunu
    {
        printf("s1 karakterinin uzunlugu büyüktür.\n");
    }
    else if (a < 0) //eger negatif ise s2 uzun oldugunu anlarız.
    {
        printf("s2 karakter uzunlugu büyüktür.\n");
    }

    return 0;
}
