#include<iostream>
using namespace std;

int main()
{
	int a, jam, menit, detik, sisa;
	
	cout<<"Konversi Detik ke Jam, Menit, Detik\n";
	cout<<"Masukan Detik : ";cin>>a;
	
	//rumus jam, menit, detik, sisa
	
	jam=a/3600;
	sisa=a%3600;
	menit=sisa/60;
	detik=sisa%60;
	
	cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik "<<endl;
}
