#include <iostream>
#include <string>


using namespace std;

struct pelanggan
{
	char noHP[60],kp[50],nama[50],grade[7],kembali,kelas[7],alamat[100];
	float nilaitotal;	
};

int main()
{
	{
	system ("COLOR 50");
	pelanggan ltp[50];
	int pilih,jml_plg, biaya,jumlahBayar,uangKembalian,berat,totalberat;
	char kembali, kp[50], nama[30],alamat[60],noHP[60],kdKategori,kategoriCucian[30];
	atas:
		cout<<"==================================================================="<<endl;
		cout<<"------------------- RESPONSI STRUKTUR DATA PRAKTEK UAS-------------"<<endl;
		cout<<"==================================================================="<<endl;
		cout<<"1. Input data Pelanggan"<<endl;
		cout<<"2. Sortir data Loundry"<<endl;
		cout<<"3. Mencari Data"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"==================================================================="<<endl;
		cout<<"Masukkan Pilihan  : ";
		cin>>pilih;
		
		
		if(pilih==1)
		{
			system("cls");
			cout<<"==============================================================="<<endl;
			cout<<"========================Data Pelanggan========================="<<endl;
			cout<<"==============================================================="<<endl;
			cout<<endl;
					cout<<"Masukkan Jumlah Data Pelanggan = "; cin >> jml_plg;
					pelanggan ltp[jml_plg];
					
					int i;
					for (i=0; i<jml_plg; i++)
					{
						cout <<"Input Data PELANGGAN ke-"<<i+1<< endl;
						
						cout<<"----------------------------------------------------"<<endl;
						cout<<"Kode Pelanggan		: ";cin>>kp;
						cout<<"Nama Pelanggan		: ";cin>>nama;
						cout<<"Alamat				: ";cin>>alamat;
						cout<<"No Handphone			: ";cin>>noHP;
						cout<<"----------------------------------------------------"<<endl;
						cout<<"\tKategori Cucian"<<endl;
						cout<<"----------------------------------------------------"<<endl;
						cout<<"1. Reguler"<<endl;
						cout<<"2. Ekspress"<<endl;
						cout<<"3. Kilat"<<endl;
						cout<<"----------------------------------------------------"<<endl;
						cout<<"Input No Kategori [1-3]		: ";cin>>kdKategori;
							switch(kdKategori)
								{
								case '1' :
								cout<<"Regular"<<endl;
								biaya=9000;
								break;
								case '2' :
								cout<<"Express"<<endl;
								biaya=12000;
								break;
								case '3' :
								cout<<"Kilat"<<endl;
								biaya=15000;
								break;
								default:
								cout<<"Kode Salah"<<endl;
								break;
								}
						cout<<"Berat Cucian (Kg)		: ";cin>>berat;		
						cout<<"----------------------------------------------------"<<endl;
						cout<<"\tResi Pesanan Laundry"<<endl;
						cout<<"----------------------------------------------------"<<endl;
						cout<<"Nama Pelanggan			: "<<nama<<endl;
						cout<<"Alamat				: "<<alamat<<endl;
						cout<<"No Handphone			: "<<noHP<<endl;
						cout<<kategoriCucian<<"	: Rp. "<<biaya<<endl;
						totalberat=biaya*berat;
						cout<<"Berat Cucian			: Rp. "<<totalberat<<endl;
						cout<<"===================================================="<<endl;
						cout<<"Total Bayar			: Rp. ";cin>>jumlahBayar;
						uangKembalian=jumlahBayar-totalberat;
						cout<<"Kembalian			: Rp. "<<uangKembalian<<endl;
						cout<<"===================================================="<<endl;
						cout<<"Terima kasih telah datang di laundry Kami"<<endl;
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
		else if(pilih==2)
		{
			system("cls");
			cout<<"==============================================================="<<endl;
			cout<<"=======================  Data Londry = ========================"<<endl;
			cout<<"==============================================================="<<endl;
			cout<<endl;
			     for(i=a-5;i>=0;i--)
     {
      for(j=0;j<=i;j++)
        {
         if(data[j].kode>data[j+1].kode)
            {
             temp=data[j].kode;
                data[j].kode=data[j+1].kode;
             data[j+1].kode=temp;
           }
       }
    }
  gotoxy(25,5);cout<<"Pensortiran Berdasarkan Kode :"<<endl;
     for(i=0;i<a;i++) //buble sort
        {
        cout<<"\t\t\t    "<<data[i].kode<<endl;
    }
            getche();
			
			
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
			cout<<"Masukkan Kode Pelanggan : ";
			cin>>kp;
			for(int i=0; i<jml_plg; i++)
			{
				if(ltp[i].kp,kp)
				{
					cout<<endl;
					cout<<"Kode Pelanggan : "<<ltp[i].kp;
					cout<<endl;
					cout<<"Nama : "<<ltp[i].nama;
					cout<<endl;
					cout<<"Nomor HP : "<<ltp[i].noHP;
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
