#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main(){

 int i,j,n,temp,data[10];

   cout<<"\nJumlah Data Yang Akan Di Urutkan :";
    cin>>n;

      for(i=1;i<=n;i++){
        cout<<"\nMasuKkan Data Ke -"<<i<<":";
          cin>>data[i];
      }

      cout<<"\nData Yang Belum Di Sorting \n";
       for(i=1;i<=n;i++){
           cout<<data[i]<<"\n";
         }
      cout<<"\nData Yang Sudah Di Sorting ";

       for(i=1;i<=n;i++){
          for(j=1;j<=n;j++){
              if(data[i]<data[j]){
                 temp=data[i];
                  data[i]=data[j];
                  data[j]=temp;
               }
            }
         }
       for(i=1;i<=n;i++){
         cout<<"\n"<<data[i];
       }
       getch();
         return 0;

}
