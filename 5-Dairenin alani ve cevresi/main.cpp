#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
    int daireninBirKenari;
    cout << "Dairenin yar� �ap�n� girin."<<endl;
    cin >> daireninBirKenari;
    cout << "Dairenin �evresi:"<< 2 * 3.14 * daireninBirKenari<<endl<<"Dairenin alan�:"<< daireninBirKenari * daireninBirKenari * 3.14<<endl;

}
