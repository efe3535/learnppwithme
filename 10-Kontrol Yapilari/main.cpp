#include <iostream>
using namespace std;
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    string mail = "admin@admin.com";
    string sifre = "admin";
    string gizliparola = "gizliadmin";
    string kontrolmail;
    string kontrolparola;

    cout<<"L�tfen mailinizi girin:"<<endl;
    cin>>kontrolmail;
    if(kontrolmail==mail){
        cout<<"Mail do�ru."<<endl;
        cout<<"L�tfen �ifrenizi girin:"<<endl;
        cin>>kontrolparola;
        if(kontrolparola==sifre){
            cout<<"Parola do�ru. Sisteme ho� geldiniz."<<endl;
        }
        else if(kontrolparola==gizliparola){
            cout<<"Gizli Admin ho� geldin!"<<endl;
        }
        else{
            cout<<"�ifre yanl��."<<endl;
        }
    }
    else{
        cout<<"Mail yanl��."<<endl;
    }
}