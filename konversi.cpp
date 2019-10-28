#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

main(){
	float celcius, hslheit, hslvin, hslmur;
	int pilih;
	
	cout<< "Masukkan suhu dalam derajat Celcius : " ;
	cin>>celcius;
	
	cout<<endl;
	cout<< "1.Fahrenheit" <<endl;
	cout<< "2.Kelvin" <<endl;
	cout<< "3.Reamur" <<endl;
	cout<< "Masukkan Pilihan: ";
	cin>>pilih;
	
	cout<<endl;
	switch(pilih){
		case 1:
			hslheit= celcius*1.8+32;
			cout<<celcius<< "Celcius = " <<hslheit<< "Fahrenheit";
			break;
		case 2:
			hslvin= celcius+273.15;
			cout<<celcius<< "Celcius = " <<hslvin<< "Kelvin";
			break;
		case 3:
			hslmur= celcius*4/5;
			cout<<celcius<< "Celcius = " <<hslmur<< "Reamur";
			break;
		default:
			cout<<"Pilihihan salah";
			break;		
		} 
		cout<< endl;
		getch();
		return 0;	
	}
