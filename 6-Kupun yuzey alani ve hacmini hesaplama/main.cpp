#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    float kupunBirKenari;

    cout << "Lütfen küpün bir kenarını girin"<<endl;
    cin >> kupunBirKenari;
    cout << "Küpün bir hacmi:" <<pow(kupunBirKenari,3) <<endl <<"Küpün yüzeylerinin toplam alanı:" <<6 * pow(kupunBirKenari,2) <<endl;

}
