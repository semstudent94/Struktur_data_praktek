#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
     int data[10]; //Deklarasi Data
     int i, j, k, tmp, jumlah=0; //Deklarasi Pengulangan
      cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT\n\n";
      cout<<"Masukkan jumlah bilangan : ";
    cin>>k; //Input Banyak Data

     for(i=0; i<k; i++)
        {
             cout<<"Masukkan Angka ke "<<(i+1)<<" : "; //Input Data
              cin>>data[i];
             jumlah=jumlah+data[i];

        }

  cout<<"\nData sebelum diurutkan : "<<endl; //Output Data Yang Di Input

    for(i=0; i<k; i++)
            {
                cout<<data[i]<<" ";
                cout<<endl;
            }



     for( i=0;i<k;i++)//Disini Proses Bubble Sort
      {
          for(j=i+1;j<k;j++)
          {
               if(data[i]>data[j])
             {
                 tmp=data[i];
                 data[i]=data[j];
                 data[j]=tmp;
                 cout<<endl;

             }
         }

        cout<<"\nData setelah diurutkan  : "<<endl;
       for(i=0; i<k; i++)
       {
        {
           cout<<data[i]<<" ";
            }
       }


    cout<<"\nData setelah diurutkan (Genap): "<<endl;
     for(i=0; i<k; i++)
     {
      if (data[i]%2==0)
          {
    cout<<data[i]<<" ";
          }
     }
     cout<<"\nData setelah diurutkan (Ganjil): "<<endl;
         for(i=0; i<k; i++)
     {
      if (data[i]%2!=0)
          {
      cout<<data[i]<<" ";
          }
     }
     cout<<"\n\nJumlah dari bilangan  = "<<jumlah;
      getch();
     return 0;
      }
}
