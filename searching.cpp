#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<<"  Program Mencari Data Ganjil Genap\n";
    cout<<"=======================================\n";
    int jml;
    string cari;
    cout<<"Masukkan jumlah data : ";cin>>jml;
    int ar[jml];
    cout<<"Anda akan memasukkan "<<jml<<" data\n";
    cout<<"---------------------------------------\n";

    for(int i=0;i<jml;i++){
        cout<<"Input data ke-"<<i+1<<" : ";cin>>ar[i];
    }
    int tot=0;
    cout<<"\nCari data ganjil atau genap";
    cout<<"\nInput (ganjil/genap) : ";cin>>cari;
    cout<<"---------------------------------------\n";
    if(cari=="ganjil" || cari=="Ganjil" || cari=="GANJIL"){

        cout<<"Data Ganjil\n\n";

        for(int i=0;i<jml;i++){
            if(ar[i]%2!=0){
                cout<<ar[i]<<" Pada indeks ke-"<<i+1<<endl;
                tot+=1;
            }
        }
        cout<<"=======================================\n";
        cout<<"Data ganjil berjumlah "<<tot;
    }

    else{

        cout<<"Data Genap\n\n";

        for(int i=0;i<jml;i++){
            if(ar[i]%2==0){
                cout<<ar[i]<<" Pada indeks ke-"<<i+1<<endl;
                tot+=1;
            }
        }
        cout<<"=======================================\n";
        cout<<"Data genap berjumlah "<<tot;
    }
getch();
}
