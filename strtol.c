/*strtol fonksiyonu 3 değer alır birincisi string degerindeki degerlerinin sayılarını alır eger
sayi bulamaz ise geriye 0 degeri döndürür 2 degere ise geriye kalan diger dizisini yazar*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const char *string = "123-abc"; // işaretçi tanımı
    char *remainderPtr;             //char türünde işaretçi oluşturulması
    long x;                         //dönüştürülmüş diziyi tutmak için değişken tanımı
    x = strtol(string, &remainderPtr, 0);
    printf("The orginal string is = %s\n", string);
    printf("The converted value is = %ld\n", x);
    printf("The remaninder of the orginal string is = %s\n", remainderPtr);
    printf("The converted value plus 567 is =%ld\n", x + 567);
    return 0;
}
