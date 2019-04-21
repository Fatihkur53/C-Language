//kart karistirma ve dagitim
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
//tanimlamalar ekleniyor
void shuffle(unsigned int wDeck[][FACES]); //karsilastirma wDeck uzerinde degisiklik yapar
void deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[]); //dagitmak diziler uzerinde degisiklik yapmaz
int main(int argc, char const *argv[])
{
    //suid dizisini yukle
    const char *suit[SUITS] = {"Hearts", "Dimonds", "Clubs", "Spades"};
    //face dizisini yukle
    const char *face[FACES] = {
        "Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King"};
    //deck dizisi yukle
    unsigned int deck[SUITS][FACES] = {0};

    srand(time(NULL)), //cekirdek rastgele sayi uretici

        shuffle(deck);      //desteyi karistir
    deal(deck, face, suit); //desteyi dagit
    return 0;
}

void shuffle(unsigned int wDeck[][FACES])
{
    size_t row;    //satir numarasi
    size_t column; //sutun numarasi
    size_t card;   //sayac

    //kartlarin herbiri icin deck yuvasini rastgele olarak sec
    for (card = 1; card <= CARDS; ++card)
    {
        //kullanilmayan yuva bulana kadar rastgele olarak yeni bir yer sec
        do
        {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck[row][column] != 0); //do-while sonu
        //secilen deck yuvasi icerisine kart numarasini yerlestirir
        wDeck[row][column] = card;
    } //for sonu
} //shuffle sonu

//deck icerisindeki kartlari dagit
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
    size_t card;   //kart sayaci
    size_t row;    //satir sayaci
    size_t column; //sutun sayaci

    //kartlarin her birini dagit
    for (card = 1; card <= CARDS; ++card)
    {
        //wDeck satilari boyunca dongu olustur
        for (row = 0; row < SUITS; ++row)
        {
            //Gecerli satir icin wDeck sutunlari boyunca dongu olustur
            for (column = 0; column < FACES; ++column)
            {
                //eger slot gecerli karti iceriyorsa karti goruntule
                if (wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 == 0 ? '\n' : '\t'); //2-sutun bicimi
                }                                        //if sonu
            }                                            //for sonu
        }                                                //for sonu
    }                                                    //for sonu
} //deal fonksiyon sonu
