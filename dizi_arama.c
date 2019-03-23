#include <stdio.h>
#define SIZE 100

size_t linearsearch(const int array[], int key,size_t size);


int main(int argc, char const *argv[])
{
    int a[SIZE];//a dizisinin tanımlanması
    size_t x;//a dizisindeki 0-99 eleman için sayaç tanımlanması
    int searchKey;//a dizisinde aranacak anahtar
    size_t element;//anahtarın konumunu veya -1 tutacak olan değişken

    //veri üretimi
    for(x=0;x<SIZE;++x){
        a[x]=2*x;
    }//for sonu

    puts("Tamsayı arama anahtarını giriniz:\n");
    scanf("%d",&searchKey);

    //a dizisinde anahtar aranması
    element=linearsearch(a,searchKey,SIZE);


    //a dizisinde anahtar aranması
    if(element!=-1){
        printf("Bulunan değer %ld\n",element);
    }else{
        puts("Değer bulunamadı\n");
    }//else end
    return 0;
}//main end


//anahtar ile her elemanın doğru konum bulana kadar
//veya dizi sonuna ulaşana kadar devam etmesi;eleman bulundu ise konumu
//bulunamadı ise -1 döndürmesi
size_t linearsearch(const int array[],int key,size_t size){
    size_t n;//sayaç
    //dizi içinde döngü lie dolaşılması
    for(n=0;n<size;++n){
        if(array[n]==key) return n;//konumun dönüdürülmesi
    }
    return -1;//anahtar bulunamaması
}//linearsearch fonksiyon sonu