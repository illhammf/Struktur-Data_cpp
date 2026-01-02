#include <iostream>
#include <conio.h>

using namespace std;
struct mahasiswa{
	char Nim[15];
	char Nama[15];
	float Nilai;
};
struct alamat{
	string jalan;
	string rt_rw;
	string kecamatan;
	char kab_kota[20];
	char provinsi[20];
};

int main(){
	int a;
	cout<<"Masukkan jumlah mahasiswa = ";cin>>a;
	mahasiswa mhs[a];
	alamat alm[a];
	
	for(int i=0;i<a;i++){
		cout<<"\nMasukkan data mahasiswa ke-"<<i+1<<endl;
		cout<<"NIM = ";cin>>mhs[i].Nim;
		cout<<"Nama = ";cin>>mhs[i].Nama;
		cout<<"Nilai = ";cin>>mhs[i].Nilai;
		
		cout<<"\nMasukkan alamat ke-"<<i+1<<endl;
		cout<<"Jalan = ";cin>>alm[i].jalan;
		cout<<"RT RW = ";cin>>alm[i].rt_rw;
		cout<<"Kecamatan = ";cin>>alm[i].kecamatan;
		cout<<"Kabupaten/Kota = ";cin>>alm[i].kab_kota;
		cout<<"Provinsi = ";cin>>alm[i].provinsi;
	}
	
	cout<<endl<<"Data "<<a<<" Mahasiswa"<<endl;
	cout<<"============================<<"<<endl;
	for(int i=0;i<a;i++){
		cout<<"\nData mahasiswa ke-"<<i+1<<endl;
		cout<<"NIM = "<<mhs[i].Nim<<endl;
		cout<<"Nama = "<<mhs[i].Nama<<endl;
		cout<<"Nilai = "<<mhs[i].Nilai<<endl;
		
		cout<<"\nJalan = "<<alm[i].jalan<<endl;
		cout<<"RT RW = "<<alm[i].rt_rw<<endl;
		cout<<"Kecamatan = "<<alm[i].kecamatan<<endl;
		cout<<"RT RW = "<<alm[i].kab_kota<<endl;
		cout<<"Kecamatan = "<<alm[i].provinsi<<endl;
	}
return 0;

}
