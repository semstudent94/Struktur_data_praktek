#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


struct laptop
{
	char brand[12]; 
	char merek[12];
	int jml,harga;
	float ttlharga;
};

main()
{
	int jml_laptop;
	cout<<"Masukkan jumlah laptop = "; cin >> jml_laptop;
	laptop ltp[jml_laptop];
	
	int i;
	for (i=0; i<jml_laptop; i++)
	{
		cout <<"Input data laptop ke-"<<i+1<< endl;
		
		cout <<"Brand : "; cin >> ltp[i].brand;
		
		cout <<"Merek : "; cin >> ltp[i].merek;
		
		cout <<"Harga : "; cin >> ltp[i].harga;
		
		cout <<"Jumlah : "; cin >> ltp[i].jml;
		
		ltp[i].ttlharga=ltp[i].harga*ltp[i].jml;
		
	};
	
	printf("Data yang telah berhasil di proses : \n");
	printf("--------------------------------------------------- \n");
	printf("|  Brand  |     Merek   |    Harga   |   Jumlah    |   Total Harga  |  \n");
	cout <<"----------------------------------------------------- \n";
	
	for (i=0; i<jml_laptop; i++)
	{
		printf("| %-8s | %-20s | %3i | %3i | %c | \n",
		ltp[i].brand,ltp[i].merek,ltp[i].harga,ltp[i].jml,ltp[i].ttlharga);
	}
	cout <<"--------------------------------------------------";
	getch();
	return 0;
}
