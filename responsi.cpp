#include <iostream>
#include <string>


using namespace std;

struct mahasiswa
{
	int nilai[7];
	char nim[50],nama[50],grade[7],kembali,kelas[7],alamat[100];
	float nilaitotal;	
};

int main()
{
	{
	system ("COLOR 37");
	mahasiswa ltp[50];
	int pilih,jml_mhs;
	char kembali, Nim;
	atas:
		cout<<"==================================================================="<<endl;
		cout<<"----------------------- RESPONSI STRUKTUR DATA PRAKTEK-------------"<<endl;
		cout<<"==================================================================="<<endl;
		cout<<"1. Input data"<<endl;
		cout<<"2. Mengurutkan Data"<<endl;
		cout<<"3. Mencari data"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"==================================================================="<<endl;
		cout<<"Masukkan Pilihan  : ";
		cin>>pilih;
		
		
		if(pilih==1)
		{
			system("cls");
			cout<<"==============================================================="<<endl;
			cout<<"========================Data Mahasiswa========================="<<endl;
			cout<<"==============================================================="<<endl;
			cout<<endl;
					cout<<"Masukkan data mahasiswa = "; cin >> jml_mhs;
					mahasiswa ltp[jml_mhs];
					
					int i;
					for (i=0; i<jml_mhs; i++)
					{
						cout <<"Input data MAHASISWA ke-"<<i+1<< endl;
						
						cout <<"NIM : "; cin >> ltp[i].nim;
						
						cout <<"Nama : "; cin >> ltp[i].nama;
						
						cout <<"Kelas : "; cin >> ltp[i].kelas;
						
						cout <<"Alamat : "; cin >> ltp[i].alamat;
						
					cout<<"==========================================================================="<<endl;
					cout<<"Mata Kuliah				||	SKS	||	Grade Nilai		"<<endl;
					cout<<"==========================================================================="<<endl;
					cout<<"Pendidikan Agama			||	2	||		";cin>> ltp[i].grade[0];
					cout<<"Literasi TIK				||	2	||		";cin>> ltp[i].grade[1];
					cout<<"K3LH					||	2	||		";cin>> ltp[i].grade[2];
					cout<<"Matematika Telekomunikasi I		||	3	||		";cin>> ltp[i].grade[3];
					cout<<"DasTekKomPro				||	3	||		";cin>> ltp[i].grade[4];
					cout<<"Rangkaian Listrik			||	3	||		";cin>> ltp[i].grade[5];
					cout<<"Bengkel Mekanikal			||	2	||		";cin>> ltp[i].grade[6];
					cout<<"DaSisTel				||	3	||		";cin>> ltp[i].grade[7];
					cout<<"=========================================================================="<<endl; 		
					}
		/*
		
		tidak error tapi tidak bisa keluar hasill inputannya, );
				for(int i=0;i<8;i++)
				{	if(ltp[i].grade[i]=='A' )
					{
					ltp[i].nilai[i] = 4;
					} else if (ltp[i].grade[i]=='B') {
   					ltp[i].nilai[i] = 3;
  					} else if (ltp[i].grade[i]=='C') {
   					ltp[i].nilai[i] = 2;
  					} else if (ltp[i].grade[i]=='D') {
   					ltp[i].nilai[i] = 1;
  					} else {
   					ltp[i].nilai[i]= 0;
  					}
				}

				nilaitotal=(ltp[i].nilai[0])*(2+ltp[i].nilai[1])*(2+ltp[i].nilai[2])*(2+ltp[i].nilai[3])*(3+ltp[i].nilai[4])*(3+ltp[i].nilai[5])*(3+ltp[i].nilai[6])*(2+ltp[i].nilai[7]*3);
				cout<<"DATA IP MAHASISWA : "<<nilaitotal/20<<endl;
		
		*/


			cout<<"LANJUT KEMENU UTAMA ?  (Y/N)  : "; cin>>kembali;
			if(kembali=='Y' or 'y')
			{
				system("cls");
				goto atas;
			}else
			{
				system("cls");
				goto bawah;
			}

		
		}
		else if(pilih==2)
		{
			system("cls");
			cout<<"==============================================================="<<endl;
			cout<<"=======================Mengurutkan Data========================"<<endl;
			cout<<"==============================================================="<<endl;
			cout<<endl;
			
			
			
			
			cout<<"LANJUT KEMENU UTAMA ?  (Y/N)  : "; cin>>kembali;
			if(kembali=='Y' or 'y')
			{
				system("cls");
				goto atas;
			}else
			{
				system("cls");
				goto bawah;
			}
		}
		else if(pilih==3)
		{
			system("cls");
			cout<<"==============================================================="<<endl;
			cout<<"=========================Mencari Data=========================="<<endl;
			cout<<"==============================================================="<<endl;
			cout<<endl;
			cout<<"Masukkan Nim Mahasiswa : ";
			cin>>Nim;
			for(int i=0; i<jml_mhs; i++)
			{
				if(ltp[i].nim,Nim)
				{
					cout<<endl;
					cout<<"Nim : "<<ltp[i].nim;
					cout<<endl;
					cout<<"Nama : "<<ltp[i].nama;
					cout<<endl;
					cout<<"Kelas : "<<ltp[i].kelas;
					cout<<endl;
					cout<<"Alamat : "<<ltp[i].alamat;
					cout<<endl;			
				}
				else 
				{
					cout<<"Maaf data yang dicari tidak tersedia";
				}
			}
			

			cout<<"LANJUT KEMENU UTAMA ?  (Y/N)  : "; cin>>kembali;
			if(kembali=='Y' or 'y')
			{
				system("cls");
				goto atas;
			}else
			{
				system("cls");
				goto bawah;
			}

		}
		else
		{
			system("cls");
			goto bawah;
		}
		 
	}
	bawah:
	system("pause");
	return 0;
}
