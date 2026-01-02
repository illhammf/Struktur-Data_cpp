# include <iostream>
using namespace std;

int main(int argc, char** argv){
    int n=0;
    int *p;
    p = &n;
    n = 10;

    cout<<"Alamat n adalah "<<&n<<endl;
    cout<<"Nilai n adalah "<<n<<endl;
    cout<<"Alamat p adalah "<<&p<<endl;
    cout<<"Nilai p adalah "<<*p<<endl;

    return 0;
}
