#include <iostream>
using namespace std;
int main()
{
	int pilihan;
	char ulang;
	do
	{
   cout<<"TUGAS MENU DATA "<<endl;
   cout<<"====MENU===="<<endl;
   cout<<"1. Baca data"<<endl;
   cout<<"2. Cetak data"<<endl;
   cout<<"3. Ubah data"<<endl;
   cout<<"4. Hapus data"<<endl;
   cout<<"5. Keluar Program"<<endl;
   cout<<endl;
   
   cout<<"PILIHAN ANDA";
   cin>>pilihan;

switch(pilihan){
case 1 :
	cout<<"Anda memilih nomer menu 1"<<endl;
	break;
case 2 :
	cout<<"Anda memilih nomer menu 2"<<endl;
	break;
case 3 :
	cout<<"Anda memilih nomer menu 3"<<endl;
	break;
case 4 :
	cout<<"Anda memilih nomer menu 4"<<endl;
	break;	
case 5 :
	cout<<"Anda memilih nomer menu 5"<<endl;
	break;
default:
	cout<<"Maaf menu tidak tersedia"<<endl;
}
	cout<<endl;
	
	cout<<"Ingin memilih menu lain (Y/T) = ";
	cin>>ulang;
	cout<<endl;
}
while (ulang!='t');

cout<<"done)";

cout<<endl;
return 0;
}
