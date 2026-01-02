#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
 int data[10] = {1,3,4,7,12,25,40,65,78,90};
 
 int binary_search(int cari){
 	int a,b,c,n=10, temu=0;
 	a=0; b=n-1;
 	
 	while(a<=b && temu==0){
 		c=(a+b)/2;
 		if (data[c]==cari) {
 			 temu=1;
		 }
	
 		else if (data[c]>cari) b=c-1;
 		else a=c+1;
	 }
	 
	 if(temu==1) return 1;
	 else return 0;
 }
 
 int main(){
 	int cari, hasil, index;
 	cout<<"\nPencarian Data Binary Search"<<endl;
 	cout<<"============================"<<endl;
 	cout<<"============================"<<endl;
 	cout<<"Masukkan data yang ingin dicari = ";
 	cin>>cari;
 	
 	hasil = binary_search(cari) ;
 	
 	if(hasil==1) cout<<"Data ditemukan!"<<endl;
 	else if(hasil==0) cout<<"Data tidak ditemukan!"<<endl;
 	else cout<<"ERROR!!!"<<endl;
 	
 	return 0;
 }
