
#include <iostream>
#include<locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi,yuzbinler,onbinler,binler,yuzler,onlar,birler,toplam;



    cout<<"L�tfen 6 basamakl� bir say� girin:"<<endl;
    cin>>sayi;
    yuzbinler = sayi / 100000;
    onbinler = (sayi % 100000) / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;
    cout<<yuzbinler<<"  "<<onbinler<<"  "<<binler<<"    "<<yuzler<<"    "<<onlar<<"     "<<birler<<endl;
    toplam = yuzbinler + onbinler + binler + yuzler + onlar + birler;
    cout<<toplam;



}
