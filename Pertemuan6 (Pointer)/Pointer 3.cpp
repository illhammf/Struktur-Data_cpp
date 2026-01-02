# include <iostream>
# include <conio.h>

using namespace std;
int main(int argc, char** argv){
    int i;
    int *ia;
    i =10;
    ia = &i;

    cout<<"Alamat dari i adalah " << ia << endl;
    cout<<"Nilai i adalah " << i << endl;
    cout<<"Nilai dari pointer ia adalah" << *ia << endl;

    *ia = 50;

    cout<<"Nilai i sekarang adalah "<<i<<endl;
    cout<<"Alamat dari i adalah "<<&i<<endl;
    
    return 0;
}