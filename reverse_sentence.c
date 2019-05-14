//Verilen bir cümleyi tersten yazan kod

#include <stdio.h>
#define size 80
void reverse(const char *const sPtr); //fonksiyon tanımı

int main(int argc, char const *argv[])
{
    char sentence[size]; //char türünde dizi tanımı
    puts("Enter a line of text:");
    //bir satır metin okumak için fgets kullanımı
    fgets(sentence, size, stdin);
    puts("\nThe line printed backward is:");
    reverse(sentence);
    return 0;
} //main sonu

//özyinelemeli bir biçimde karkterlerin tersten karakter dizini içine yerleştirilmesi
void reverse(const char *const sPtr)
{
    //karakter dizini sonu ise
    if ('\0' == sPtr[0])
    {
        return; //eger ki son karaktere ulasılmıs ise özyinelemeyi durdurur
    }
    else
    {
        reverse(&sPtr[1]); //özyinelemenin yapıldığı basamak
        putchar(sPtr[0]);  //putchar ile karakter görüntüleme
    }
}
