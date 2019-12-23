//pohonbinerseimbang.cpp
/*
* program c++ untuk mengimplementasikan pohon pencarian biner seimbang
*/
#include <iostream>
#include<cstdlib>
#include<conio.h>
using namespace.std;

/* kelas simpul_SBBST */

class simpul_sbbst
{
	public:
		int tinggi, data;
		simpul_sbbst()
		{
			kiri=NULL;
			kanan=NULL;
			data=0;
			tinggi=0;
		}
		
		/*kontruktor */
		simpul_sbbst(int n)
		{
			kiri=NULL;
			kanan=NULL;
			data=n;
			tinggi=0;
		}
};

/*
* kelas pohonbstseimbang
*/

class phonbstseimbang
{
	private:
		simpul_sbbst*akar;
		public:
			/*konstruktor */
			pohonbstseimbang()
			{
				akar=NULL;
			}
			
			/* fungsi untuk memerikasa apakah pohon kosong */
			bool apakosong()
			{
				return akar==NULL;
				
			}
			
			/* membuat pohonm kosong */
			void membuatkosong()
			{
				akar=NULL;
			}
			
			/*fungsi untuk menyisipkan data */
			void sisip(int data)
			{
				akar=sisip(data,akar);
			}
			
			/*fungsi untuk mendarpatkan tinggi simpu */
			int tinggi(simpul_sbbst *t)
			{
				return t==NULL ?-1:t->tinggi;
			}
			
			/* fungsi utnuk mencari maks dari simpul kiri/kakan */
			int maks(int lhs, int rhs)
			{
				return lhs>rhs ? lhs:rhs;
			}
			
			/*fungsi untuk menyisipkan data secara rekursif*/
			simpul_sbbst*sisip(int x, simpul_sbbst*t)
			{
				if(t==NULL)
				t=new simpul_sbbst(x);
				else if(x<t->data)
				{
					t->kiri=sisip(x,t->kiri);
					if(tinggi(t->kiri) -tinggi (t->kanan)==2)
					if(x<t->kiri->data)
					t=rotasidengananakkiri(t);
					else
					t=doubledengananakkiri(t);
				}
				else if(x>t->data)
				{
					t->kanan=sisip(x,t->kanan);
					if(tinggi(t->kanan)-tinggi(t->kiri)==2)
					if(x> t->kanan->data)
					t=rotasidengananakkanan(t);
					else
					t=doubledengananakkanan(t);
					
				}
				t->tinggi=maks(tinggi(t->kiri), tinggi(t->kanan))+1;
				return t;
			}
			
			/* merotasi simpul pohon biner dengan anak kiri */
			simpul_sbbst*rotasidengananakkiri(simpul_sbsst*k2)
			{
				simpul_sbbst *k1 =k2->kiri;
				k2->kiri=k1->kanan;
				k1->kanan=k2;
				k2->tinggi=maks(tinggi(k2->kiri), tinggi(k2->kanan))+1;
				k1->tinggi=maks(tinggi(k1->kiri), k2->tinggi)+1;
				return k1;
			}
			
			/*merotasi simpul pohon biner dengan anak kanan */
			simpul_sbbst *rotasidengananakkanan(simpul_sbbst*k1)
			{
				simpul_sbbst k2=k1->kanan;
				k1->kanan=k2->kiri;
				k2->kiri=k1;
				k1->tinggi=maks(tinggi(k1->kiri), tinggi(k1->kanan))+1;
				k2->tinggi=maks(tinggi(k2->kanan), k1->tinggi)+1;
				return k2;
				
			}
			/*
			* merotasi ganda pohon biner: pertama-tama anak kiri
			* dengan anak kanannya: kemudaian simpul k3 dengan anak kiri baru
			*/
			simpul_sbbst*doubledengananakkiri(simpul_sbbst*k3)
			{
				k3->kiri=rotasidengananakkanan(k3->kiri);
				return rotasidengananakkriri(k3);
			}
			
			/*
			* merotasi ganda phon bincer: pertama-tama anak kanan
			*dengan anak kirinya: kemudian simpul k1 dengan anak kanan baru
			*/
			sim
}
