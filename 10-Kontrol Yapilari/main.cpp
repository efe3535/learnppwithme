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

    cout<<"Lütfen mailinizi girin:"<<endl;
    cin>>kontrolmail;
    if(kontrolmail==mail){
        cout<<"Mail doðru."<<endl;
        cout<<"Lütfen þifrenizi girin:"<<endl;
        cin>>kontrolparola;
        if(kontrolparola==sifre){
            cout<<"Parola doðru. Sisteme hoþ geldiniz."<<endl;
        }
        else if(kontrolparola==gizliparola){
            cout<<"Gizli Admin hoþ geldin!"<<endl;
        }
        else{
            cout<<"Þifre yanlýþ."<<endl;
        }
    }
    else{
        cout<<"Mail yanlýþ."<<endl;
    }
}