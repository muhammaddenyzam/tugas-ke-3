/*NAMA			= MUHAMMAD DENY Z A M
  NIM			= 18050623006
  PRODI			= D3 MANAJEMEN INFORMATIKA
  */
#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    struct data
    {
        char nama[20];
        long long nim;
        int tugas,kuis, mid, uas;
        float nilai_akhir;
    };struct data mhs[20];

cout<<"Program  Menghitung Nilai Akhir Mahasiswa\n"<<endl;
int i,n;

cout<<"Masukan Banyak Data Mahasiswa : ";
cin>>n;
for(i=0;i<n;i++)
{
    cout<<"Masukan Nama Mahasiswa : "; cin>>mhs[i].nama;
    cout<<"Masukan NIM mhs  	  : ";cin>>mhs[i].nim;
    cout<<"\nMasukan Nilai Tugas    : ";cin>>mhs[i].tugas;
    cout<<"Masukan Nilai Kuis     : ";cin>>mhs[i].kuis;
    cout<<"Masukan Nilai UTS      : ";cin>>mhs[i].mid;
    cout<<"Masukan Nilai UAS      : ";cin>>mhs[i].uas;
    
}
cout<<endl;
cout<<"=====================================================================\n";
cout<<"Nama"<<"\t"<<"NPM"<<"\t"<<"Tugas"<<"\t"<<"Kuis"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<endl;
cout<<"======================================================================\n";
for(i=0;i<n;i++)
{
    mhs[i].nilai_akhir = (mhs[i].tugas*10/100)+(mhs[i].kuis*20/100)+(mhs[i].mid*30/100)+(mhs[i].uas*40/100);
	cout<<mhs[i].nama<<"\t"<<mhs[i].nim<<"\t"<<mhs[i].tugas<<"\t"<<mhs[i].kuis<<"\t"<<mhs[i].mid<<"\t"<<mhs[i].uas<<"\t"<<mhs[i].nilai_akhir;
 mhs[i].nilai_akhir=(mhs[i].tugas*10/100)+(mhs[i].kuis*20/100)+(mhs[i].mid*30/100)+(mhs[i].uas*40/100);
if (mhs[i].nilai_akhir>=85)
    cout<<" (A)";
else if (mhs[i].nilai_akhir>=70)
    cout<<" (B)";
else if (mhs[i].nilai_akhir>=55)
    cout<<" (C)";
else if (mhs[i].nilai_akhir>=40)
    cout<<" (D)";
else if (mhs[i].nilai_akhir<=40)
    cout<<" (E)";
cout<<endl;
}return 0;
}
