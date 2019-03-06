/*NAMA			= MUHAMMAD DENY Z A M
  NIM			= 18050623006
  PRODI			= D3 MANAJEMEN INFORMATIKA
  */
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
struct pegawai{
char nama[50];
int jam,lemburan,gp,gajian;}z;

cout<<"\t MENGHITUNG GAJI PEGAWAI\n"<<endl;
cout<<"Masukkan Nama : ";
gets(z.nama);
cout<<"Masukkan Jam Kerja : ";cin>>z.jam;
cout<<endl;

cout<<"\nNama : "<<z.nama;
cout<<endl;
if(z.jam>7)
                {
   z.gp=7*500;
   z.lemburan=(z.jam-7)*(15*500);
                z.gajian=z.gp+z.lemburan;
   cout<<"gaji pokok : "<<z.gp;
   }
else
                {
   z.lemburan=0;
   z.gajian= z.jam*500;
   }
cout<<"\nJam Kerja : "<<z.jam;
cout<<"\nlemburan : "<<z.lemburan;
cout<<"\ngaji : "<<z.gajian;

getch();}

