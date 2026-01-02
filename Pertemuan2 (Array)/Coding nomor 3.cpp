#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int angka[5] = {1, 2, 3, 4, 5};
    char huruf[5] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << huruf[i] << " ";
    }
    cout << endl;

    return 0;
}
