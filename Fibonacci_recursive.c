//Kod fibonacci serisini zaman ile
//Bilgisayar ilişkisini göstermekte
//Sayılar büyüdükçe çözmesinin ne kadar
//Zaman aldığını gösteren kod.

#include <stdio.h>
#include <time.h>

long F(unsigned int n)
{
    return n <= 1 ? n : F(n - 1) + F(n - 2);
}

int main(int argc, char const *argv[])
{
    time_t begin, end;
    long res;
    int n;
    for (n = 0; n <= 50; n++)
    {
        time(&begin);
        res = F(n);
        time(&end);
        printf("%3i\t%9li\t%-20.3f\n", n, res, difftime(end, begin));
    }
    return 0;
}
