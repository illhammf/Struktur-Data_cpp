#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

 int main(){
 	 int data[10] = {1,3,4,7,12,25,40,65,78,90};
 	int cari, hasil;
 		int a,b,c,n=10, temu=0;
 	a=0; b=n-1;
 	int index = 0;
 	
 	cout<<"\nPencarian Data Binary Search"<<endl;
 	cout<<"============================"<<endl;
 	cout<<"============================"<<endl;
 	cout<<"Masukkan data yang ingin dicari = ";
 	cin>>cari;
 	
 	while(a<=b && temu==0){
 		c=(a+b)/2;
 		if (data[c]==cari) {
 		temu=1;
		index = c;	
		 }
 		else if (data[c]>cari) b=c-1;
 		else a=c+1;
	 }
	 
 	hasil = temu;
 	
 	if(hasil==1) cout<<"Data ditemukan! pada index ke- "<<index<<endl;
 	else if(hasil==0) cout<<"Data tidak ditemukan!"<<endl;
 	else cout<<"ERROR!!!"<<endl;
 	
 	return 0;
 }
