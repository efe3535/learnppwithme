#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
    int daireninBirKenari;
    cout << "Dairenin yarý çapýný girin."<<endl;
    cin >> daireninBirKenari;
    cout << "Dairenin Çevresi:"<< 2 * 3.14 * daireninBirKenari<<endl<<"Dairenin alaný:"<< daireninBirKenari * daireninBirKenari * 3.14<<endl;

}
