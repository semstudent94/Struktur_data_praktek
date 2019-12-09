#include<iostream>
#include<conio.h>
using namespace std;

class Simpul
{
	public:
		double dData;
		Simpul*pBrktnya;
		Simpul*pSblmnya;
		
		public:
			Simpul(double dd):
				dData(dd), pBrktnya(NULL), pSblmnya(NULL)
				{}
				
				
					void tampilSenarai()
					{
						cout<<dData<<"";
					}
}//akhir kelas simpul

class SenaraiBerantaiGanda
{
	private:
		Simpul*pPertama;//pointer ke item pertama
		Simpul*pAkhir;//pointerr ke item terkahir
		
		public:
			SenaraiBerantaiGanda(): //kontstruktor
			pPertama(NULL), pAkhir(NULL)
			{
			}
			
				~SenaraiBerantaiGanda()//destruktor (menghpus simpul)
				{
					Simpul*pSkrng=pPertama;//mulai dari awal senarai
					while(pSkrng != NULL)//sampai akhir snearai
					{
						Simpul*pLama=pSkrng;
						pSkrng=pSkrng->pBrktnya;
						delete pLama;
					}
				}
				
					bool apaKosong()//true jika ada simpul
					{
						return pPertama==NULL;
					}
					
						//menyisipkan di awal senarai
						void sisipPertama(double dd)
						
						{
							Simpul*pSimpulBaru=new Simpul(dd);//menciptakan simpul baru
							if(apaKosong()){//jika senarai kosong
							pAkhir=pSimpulBaru;}
							else{
							pPertama->pSblmnya=pSimpulBaru;
							pSimpulBaru->pBerikutnya=pPertama;
							pPertama=pSimpulBaru;}
						}
						
							void sisipAkhir(double dd) //menyisipkan diakhir senaarai
							{
								Simpul*pSimpulBaru=new Simpul(dd);//menciptakan simpul baru
								if(apaKosong()){
								pPertama=pSimpulBaru;}
								else
								{
								pAkhir->pBrktnya=pSimpulBaru;
								pSimpulBaru->pSblmnya=pAkhir;
								}
								pAkhir=pSimpulBaru;
							}
							
							void hapusPertama()
							{//(asumsi senarai-ksong)
							Simpul*pTemp=pPertama;
							if(pPertama->pBrktnya==NULL){
							pAkhir=NULL;}
							else{
							pPertama->pBrktnya->pSblmnya=NULL;
							pPertama=pPertama->pBrktnya;
							delete pTemp;
						}
							}
							
							
								void hapusAkhir()
								{//asumsi senarai kosong
									Simpul*pTemp=pAkhir;
									if(pPertama->pBrktnya==NULL)
									{
										pPertama=NULL;
									}
									else
									{
										pAkhir->pSblmnya->pBrktnya=NULL;
										pAkhir=pAkhir->pSblmnya;
										delete pTemp;
									}
								}
								
								//menyisipkan tepat seteleh Kunci
								bool sisipSetelah(double kunci,double dd){
									//asumsi senarai kosong
									Simpul*pSkrng=pPertama;
									while(pSkrng->dData !=kunci){
										pSkrng=pSkrng->pBrktnya;
										if(pSkrng==NULL){
											return false;
										}
									}
									
									Simpul*pSimpulBaru=new Simpul(dd);
									
									if(pSkrng==pAkhir)
									{
										pSimpulBaru->pBrktnya=NULL;
										pAkhir=pSimpulBaru;
									}
									else
									{
										pSimpulBaru->pBrktnya=pSkrng->pBrktnya;
										pSkrng->pBrktnya->pSblmnya=pSimpulBaru;
									}
									pSimpulBaru->pSblmnya=pSkrng;
								pSkrng->pBrktnya=pSimpulBaru;
								return true;
									
								}
								
								bool hapusKunci(double kunci)
								{
									Simpul*pSkrng=pPertama;
									while(pSkrng->dData !=kunci)
									{
										pSkrng=pSkrng->pBrktnya;
										if(pSkrng=NULL)
										return false;
									}
									
									if(pSkrng=pPertama)
									{
										pPertama=pSkrng->pBrktnya;
											
									}
									else
									{
										pSkrng->pSblmnya->pBrktnya=pSkrng->pBrktnya;
									}
									if(pSkrng==pAkhir)
									{
										pAkhir=pSkrng->pSblmnya;	
									}
									else
									{
										pSkrng->pBrktnya->pSblmnya=pSkrng->pSblmnya;
										delete pSkrng;
										return true;
									}
								}
								
								void tampilMaju()
								{
								}
								
								
}	
