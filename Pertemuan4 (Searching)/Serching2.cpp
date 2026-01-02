#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int i=0,hasil=-1;
    int t[9] = {1,2,3,4,5,6,7,8,9};
    int val, n=9;
    int index = 0;
    
    cout<<"Masukkan angka yang dicari = ";
    cin>>val;

    while((t[i]<=val) && (i<n) && (-1==hasil)){
        if(t[i]==val) 
		hasil=1;
		index=i;
        i++;
    }
	
    if(hasil==1) cout<<"Data ditemukan! pada index ke- "<<endl;
    else cout<<"Data tidak ditemukan!"<<endl;

    return 0;

}
