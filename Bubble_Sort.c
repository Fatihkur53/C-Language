#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, size_t size); //prototip

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; //a dizisi verileri
    size_t i;                                           //counter
    puts("Data items in orginal order");
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]); //orjinal verileri siralamaya yarar.
    }
    bubbleSort(a, SIZE);
    puts("\nData items in ascending order");
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]); //düzenlenmis veriler siralanir.
    }
    puts("");
    return 0;
}
//kabarcik algoritmasi kullanilarak siralama yapilir
void bubbleSort(int *const array, size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr); //swap fonksiynuna degerleri göndeririz
    unsigned int pass;                             //gecis sayaci
    size_t j;                                      //karsilastirma sayaci
    for (pass = 0; pass < size - 1; ++pass)
    {
        for (j = 0; j < size - 1; ++j)
        {
            if (array[j] > array[j + 1]) //siralama düzenin disinda ise ardisik elemanlarin yerini degistir
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;     //element1ptr hold degiskeninde tutariz
    *element1Ptr = *element2Ptr; //element2ptr element1ptr icine aktaririz
    *element2Ptr = hold;         //element
}