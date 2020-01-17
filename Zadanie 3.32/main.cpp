#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name, surname;
    cout << "Podaj imie: "; cin >> name;
    cout << "Podaj nazwisko: "; cin >> surname;
    cout << "Twoje imie i nazwisko ma dlugosc " <<
    (name+surname).size() << " znakow " << endl;
    return 0;
}
