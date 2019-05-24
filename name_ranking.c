//Ada gore siralama algoritmasi
#include <stdio.h>
#include <string.h>

void sort(char *s)
{
    char temp;
    for (int i = 0; s[i] != 0; i++) //birinci kelimeden baslanir
    {
        for (int j = i + 1; s[j] != 0; j++) //ikinci kelimeden baslanir
        {
            if (s[i] > s[j]) //eger 1. kelime 2 kelimeden büyük ise if  blogunun icine girer
            {
                temp = s[i]; //birinci kelime yedekte bekletilir
                s[i] = s[j]; //2. kelime 1.'lige gecer
                s[j] = temp; //yedekte bekleyen kelime 2.'lige gecer
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    char s[100];
    printf("Kelime:");
    scanf("%[^\n]s", s);   //enter girilene kadar veriyi al
    printf("%s\n", s);     // dizi siralamadan once
    sort(s);               //fonksiyona gonderilir ve siralanir
    printf(" -> %s\n", s); // siraladiktan sonra
    return 0;
}
