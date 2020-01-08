#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    int sum=0,product=1,tab[10];
    srand(time(NULL));
    for (int i=0; i<10; i++) {
        system ("cls");
        tab[i]=rand()%34-10;
        sum+=tab[i];
        if(tab[i]<6) product*=tab[i];
        cout << "Ostatnia wylosowana liczba: "<< tab[i] << endl
        << "Suma: " << sum << endl
        << "Iloczyn mniejszych od 6: " << product << endl;
    }
    return 0;
}
