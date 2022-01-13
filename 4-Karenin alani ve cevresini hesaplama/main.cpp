#include <iostream>
#include <locale>
using namespace std;

int main() {
    int kareninBirKenari;
    setlocale(LC_ALL, "Turkish");
    cout<<"Lütfen karenin bir kenarini girin"<<endl;
    cin>>kareninBirKenari;

    cout<<"Karenin cevresi:" << 4*kareninBirKenari <<endl<<"Karenin alani:"<< kareninBirKenari * kareninBirKenari <<endl;

}
