//pohon biner.cpp
//mendemontrasikan pohon biner 
#inculde<iostream>
#include<stack>
#include<conio.h>
using namespace std;

class Simpul
{
	public:
		int iData; //item data(kunci)
		double dData; //item data
		Simpul*pAnakKiri; //anak kiri dari simpul
		Simpul*pAnakKanan; //anak kanan dari simpul
		
			//kontruktor
		Simpul():iData(0), dData(0.0),pAnakKiri(NULL),
		pAnakKanan(NULL)
		{}
		
				~Simpul()//destruktor
			{
				cout<<"X-"<<iData<<"";
			}
			
				void tampilSimpul()//menampilkansimpul, contoh{75,7,5}
			{
				cout<<"{"<<iData<<","<<dData<<"}";
			}
}//akhir kelas simpul

class Pohon
{
	privateSimpul*pAkar;//simpul pertama pada pohon
	
		public:
		pohon():pAkar(NULL)//kontruktor
		{}
		
			Simpul*cari(int kunci)//mencari simpul dengan kunci tertentu
		{//asumsi phoon tak-kosong
			Simpul*pSkrg=pAkar; //doawa;o di akar
			while(pSkrg->iData != kunci) //mketika tidak cocok
			{
				if(kunci<pSkrg->iData)//ke kiri ??
				pSkrg=pSkrg->pAnakKiri;
				else{
					pSkrg=pSkrg->pAnakKanan;
							if(pSkrg==NULL)//jika tidak ada anak.
							return NULL; //tidak ditemukan
				}
				
					returnpSkrg;//detumkan
			}
		}//akhir cari()
		
			void sisip(int id, double dd)//menyisipkan simpul baru
			{
				Simpul*SimpulBaru=new Simpul; //menciptakan simpul baru
				SimpulBaru->iData=id; //menyisipkan data
				SimpulBarudData=dd;
				
					if(pAkar==NULL)//tidak ada simpul pada akar
				pAkar=SimpulBaru;
				else//akar ditempati
				{
					Simpul*pSkrg=pAkar;//diawali di akar
					Simpul*pInduk;
					while(true)//keluar secara internal
					{
						pInduk=pSkrg;
						if(id<pSkrg->iData)//ke kiri?
						{
							pSkrg=pSkrg->pAnakKiri;
							if(pSkrg==NULL)//jika di akhir
							{//sisip di kiri
								pInduk->pAnakKiri = SimpulBaru;
								return;
							}
						}//akhir kiri
						else//atau ke kanan
						{
							pSkrg=pSkrg->pAnankKanan;
							if(pSkrg=NULL)//jika di akhgir
							{//sisipkan di kanan
								pInduk->pAnakkanan=SimpulBaru;
								return;
								
							}
						}//akhir kanan
					}//akhir whhile
				}//akhir else tidak ada akanar
			}//akhir sisip()
			
				void jelajah(int tipejelajah)
				{
					switch(tipejelajah)
					{
						case 1:cout<<"\nPenjelajah Preorder: ";
						preOrder(pAkar);
						break;
						case 2: cout<<"\n Penjelajah Inorder: ";
						inOrder(pAkar);
						break;
						case 3: cout<<"\n Penjelajah Postorder: ";
						postOrder(pAkar);
						braek
					}
					cout<<endl;
				}
				
				void preOrder(Simpul*pAkarlokal)
				{
					if(pAkarLokal != NULL)
					{
						cout<<pAkarLokal->iData<<"";//menampilkan simpul
						preOrder(pAkarLokal->pAnakKiri); //anak kiri
						preOrder(pAkarLokal->pAnakKanan);//anak kanan
					}
				}
				
				void inOrder(Simpul*pAkarLokal)
				{
					if(pAkarLokal != NULL)
					{
						inOrder(pAkarLokal->pAnakKiri); //anak kiri
						cout<<pAkarLokal->iData<<"";//menampilkan simpul
						inOrder(pAkarLokal->pAnakKanan);//anak kanan	
					}
				}
				void postOrder(Simpul*pAkarLokal)
				{
					if(pAkarLokal != NULL)
					{
						postOrder(pAkarLokal->pAnakKiri); //anak kiri
						postOrder(pAkarLokal->pAnakKanan);//anak kanan		
						cout<<pAkarLokal->iData<<"";//menampilkan simpul
					}					
				}
				
				void tampilPohon()
				{
					stack<simpul*>tumpukan;
					tumpukan.push(pAkar);
					int jmlspaci=32;
					bool apaBarisKosong=false;
					cout<<".......................";
					cout<<endl;
					
					while(apaBarisKosong=false)
					{
						stack<Simpul*> tumpukanLokal;
						apaBarisKosong=True;
						
						for(int j=0; j<jmlspasi; j++)
							cout<<"";
							
							while(tumpukan.empty()==false)
							{
								Simpul*temp=tumpukan.top();
								tumpukan.pop();
								
								if(temp !=NULL)
								{
									cout<<temp->iData;
									tumpukanLokal.push(temp->pAnakKiri);
									tumpukanLokal.push(temp->pAnakKanan);
									
									if(temp->pAnakKiri !=NULL || temp->pAnakKanan !=NULL)
									
										apaBarisKosong=false;
								}
								else
								{
									cout<<"--";
									tumpukanLokal.push(NULL);
									tumpukanLokal.push(NULL)
								}
								
								for(int j=0; j<jmlspasi*2-2; j++)
									cout<<"";
							}
							cout<<endl;
							jmlspasi/=2;
							
							while(tumpukanLokal.emplace()==false)
							{
								tumpukan.push(tumpukanLokal.top());
								tumpukanLokal.pop();
							}
					}
					cout<<"..........................";
					cout<<endl;
				}//akhir tampil pohon
				void hapus()//menghapus semua simpul
				{hapusRekursif(pAkar);} //mulai dari akar
				
				
			void hapusRekurisf(Simpul*pAkarLokal)//menghapus simpul-simpul
			{
				if(pAkarLokal != NULL)
				{
					hapusRekursif(pAkarLokal->pAnakKiri); subpohon kiri
					hapusRekursif(AakarLokal->pAnakaKanan); subpohon
					
					delete paAkarLokal;//menghapus simpul ini
				}
			}
};//akhir kelas pohon

int main()
{
	int nilai;
	char pilihan=NULL;
	Simpul*ditemukan;
	
	Pohon pohon; mencipkanan Pohon
	
	pohon.sisip(50,5.0); menyisipkan pohon pohon
	pohon.sisip(25,2.5);
	pohon.sisip(75,7.5);
	pohon.sisip(12,1.2);
	pohon.sisip(37,3.7);
	pohon.sisip(43,4.3);
}
